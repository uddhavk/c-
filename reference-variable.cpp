#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int &b = a;

    b = 25;

    cout<<b<<"\n";
    cout<<a<<"\n";
    return 0;
}