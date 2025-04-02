#include <iostream>
using namespace std;

int addnumbers(int num,int& sum){
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
    if(sum>9){
        int newsum=0;
        return addnumbers(sum,newsum);
    }
    return sum;
}

int main(){
    int num=98;
    int sum=0;
    cout<<addnumbers(num,sum);

return 0;
}