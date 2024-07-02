#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"enter a:";
    cin>>a;

    cout<<"enter b:";
    cin>>b;

    cout<<"enter c:";
    cin>>c;  

    if(a>=b && b>=c){
        cout<<"a is largest"<<a<<endl;
    }else if (b>=c){
        cout<<"b is largest"<<b<<endl;
    }else{
        cout<<"c is largest"<<c<<endl;
    }
    

  return 0;
}