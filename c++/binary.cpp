#include <iostream> 
#include <vector>
using namespace std;

int binarySearch(vector<int>arr,int n,int l,int h,int target){
    while(l<h){
        int mid=(l+h)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            return binarySearch(arr,n,l,mid-1,target);
        }
        else {
            return binarySearch(arr,n,mid+1,h,target);
        }
        return -1;
    }

}

int main(){
    vector<int>arr{1,12,23,34,45,46,56,67,78,90};
    int n=arr.size();
    int target=78;
    int l=0;
    int h=n-1;
    int index=binarySearch(arr,n,l,h,target);
    cout<<index<<endl;

return 0;
}