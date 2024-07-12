#include<iostream>
using namespace std;

int main(){

    int n = 10829;
    int res = 0 ;

    while(n>0){
        int lastdig = n % 10;
        res = res*10+lastdig;
       n=n/10;
    }

    cout<<"Reverse number : "<<res<<endl;
    return 0;
}