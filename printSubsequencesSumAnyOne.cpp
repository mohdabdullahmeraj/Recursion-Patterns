bool printSubsequencesSumAnyOne(int index, vector<int>& ds, int s, int sum, int arr[], int n){
    if(index == n){
        if(s==sum){
            for(auto it : ds){
                cout<< it << " ";
            }
            cout<<endl;
            return true;
            
        }
        else return false;
    }
    
    ds.push_back(arr[index]);
    s = s + arr[index];
    if (printSubsequencesSumAnyOne(index+1, ds, s, sum, arr, n) == true) return true; 
    s = s - arr[index];
    ds.pop_back();

    if (printSubsequencesSumAnyOne(index+1, ds, s, sum, arr, n) == true) return true;

    return false;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printSubsequencesSumAnyOne(0, ds, 0, sum, arr, n);

    return 0;
}     

