#include<iostream>
using namespace std;

void changeA(int &babu){
     babu = 25;
    cout<<babu<<'\n';
}

int main(){
    int aditya = 10;
    changeA(aditya);

    cout<<aditya<<'\n';
    return 0;
}