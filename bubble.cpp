#include <iostream>
#include <vector>
using namespace std;

// void bubblesort(vector<int>&ans){
//     int n=ans.size();

//     for(int i=0;i<n-1;i++){
//         bool swapped=false;
//         for(int j=0;j<n-i-1;j++){
//             if(ans[j]>ans[j+1]){
//                 swap(ans[j],ans[j+1]);
//                 swapped=true;
//             }
//         }
//         if(!swapped){
//             break;
//         }
//     }
// }


void bubble2(vector<int>&ans){
    for(int i=0;i<ans.size()-1;i++){
        bool swapped=false;
        for(int j=0;j<ans.size()-i-1;j++){
            if(ans[j]>ans[j+1]){
                swap(ans[j],ans[j+1]);
                swapped=true;
            }

        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<ans.size();i++){
        cin>>ans[i];
    }
    bubble2(ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    

return 0;
}