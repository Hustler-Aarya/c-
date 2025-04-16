#include <iostream>
using namespace std;

int addnumbers(int num,int& sum){
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
    if(sum>9){
        return addnumbers(num,sum);
    }
    return sum;
}

int main(){
    int num=98;
    int sum=0;
    addnumbers(num,sum);
    cout<<sum;

return 0;
}