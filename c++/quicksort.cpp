#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int st,int end){
    int pivot=arr[end];
    int i=st-1;
    for(int j=st;j<arr.size();j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;

}


void quicksort(vector<int>&arr,int st,int end){
    if(st<end){
    int pivot=partition(arr,st,end);
    quicksort(arr,st,pivot-1);//left side of pivot
    quicksort(arr,pivot+1,end);// right side of pivot 
    }
   
}

int main(){
    vector<int>arr={4,6,1,3,9,7,4};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
return 0;
}