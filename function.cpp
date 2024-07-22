#include<iostream>
using namespace std;

void sayhello(){
    cout<<"HELLO \n";
}

void assistent(){
    sayhello();
    cout<<"Work is done..!\n";
}

int main(){
    assistent();
 return 0;
}