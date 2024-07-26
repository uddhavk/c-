#include<iostream>
using namespace std;

int main(){
    int a = 20;
    int *ptr=&a;

    cout<<ptr<<"\n";
    cout<<*ptr<<'\n';
    

    *ptr=10;
    cout<<*ptr<<'\n';

    cout<<a<<"\n";
    return 0;
}