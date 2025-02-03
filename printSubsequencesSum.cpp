void printSubsequencesSum(int index, vector<int>& ds, int s, int sum, int arr[], int n){
    if(index == n){
        if(s==sum){
            for(auto it : ds){
                cout<< it << " ";
            }
            cout<<endl;
            
        }
        return;
    }
    
    ds.push_back(arr[index]);
    s = s + arr[index];
    printSubsequencesSum(index+1, ds, s, sum, arr, n);
    s = s - arr[index];
    ds.pop_back();

    printSubsequencesSum(index+1, ds, s, sum, arr, n);
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printSubsequencesSum(0, ds, 0, sum, arr, n);

    return 0;
}     
