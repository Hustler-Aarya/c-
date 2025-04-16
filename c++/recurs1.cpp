#include <iostream>
using namespace std;

void print(string s,int i){
    if(i>=s.size()){
        return;
    }
    print(s,i+1);
    cout<<s[i]<<" ";
    // print(s,i+1);
}

int main(){
    string s="aaryakapoor";
    int i=0;
    print(s,i);
return 0;
}