void selectionSort(vector<int>&a) {
    // Write your code here.
    int mini, miniIndex;
    int sz = a.size();
    for(int i=0;i<sz; i++){
        mini = a[i];
        miniIndex = i;
        for(int j=i;j<sz;j++){
            if(a[j]<mini){
                mini = a[j];
                miniIndex = j;
            }
        }
        int temp = a[i];
        a[i] = mini;
        a[miniIndex] = temp;
    }
}