#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0 || x%10 ==0 && x!=0){
                return false;
            }
            int rn=0;
            while(x>rn){
                
                rn=(rn*10)+x%10;
                x/=10;
            }
            return x==rn || x== rn/10;
        }
    };


int main(){

return 0;
}