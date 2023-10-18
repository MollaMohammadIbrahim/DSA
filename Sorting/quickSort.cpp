#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    //cout<<"partition"<<endl;
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    int temp = arr[i];
    arr[i] =  pivot;
    arr[high] = temp;
    return i;
}
void quickSort(vector<int> &arr, int low, int high){
    //cout<<"entering quickorting..."<<endl;
    if(low<high){
        int pivot_index = partition(arr, low, high);
        quickSort(arr,low, pivot_index-1);
        quickSort(arr,pivot_index+1,high);

    }
}
int main(){
    vector<int> arr = {5,4,7,2,1,1,1,1,9,10};
      for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    quickSort(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}