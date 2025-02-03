int printSubsequencesSumCount(int index, int s, int sum, int arr[], int n){
    if(index == n){
        if(s==sum) return 1;
        else return 0;
    }
    
    
    s = s + arr[index];
    int l = printSubsequencesSumCount(index+1, s, sum, arr, n);
    s = s - arr[index];
    
    int r = printSubsequencesSumCount(index+1, s, sum, arr, n);

    return l+r;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    cout<<printSubsequencesSumCount(0, 0, sum, arr, n);

    return 0;
}     
