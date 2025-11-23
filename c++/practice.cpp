#include <iostream>
#include <vector>
using namespace std;


string removespace(string str){
    vector<string>ans;
    string s="";
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            if(s!=""){
                ans.push_back(s);
                s="";
            }
        }
        else{
            s+=str[i];
        }
        
    }
    string abc="";
    for(int i=0;i<ans.size();i++){
        abc+=ans[i];
        abc+=' ';
    }
    return abc;
    
}

int main(){
    string str=" how are you i    am good  ";
    cout<<removespace(str);


return 0;
}