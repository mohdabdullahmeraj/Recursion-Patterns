void printSubsequences(int index, vector<int>& ds, int arr[], int n){
    if(index == n){
        for(auto it : ds){
            cout<< it << " ";
        }
        if(ds.size() == 0){
            cout<< "{}";
        }
        cout<<endl;
        return;
    }
    printSubsequences(index+1, ds, arr, n);
    ds.push_back(arr[index]);
    printSubsequences(index+1, ds, arr, n);
    ds.pop_back();

}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printSubsequences(0, ds, arr, n);

    return 0;
}     
