#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void merge(vector<int>&arr,int st,int mid,int end){
    //backtracking 
    //merging
    //storing the sorted array in the temporary array
    int i=st;
    int j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0;i<temp.size();i++){
        arr[i+st]=temp[i];

    }

}


void mergesort(vector<int>&arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        //recursion 
        mergesort(arr,st,mid); //left array
        mergesort(arr,mid+1,end); //right array

        merge(arr,st,mid,end);
        
    }
    
}

int main(){
    vector<int>arr={4,8,2,6,1,9,10,16,14};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
return 0;
}