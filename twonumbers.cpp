#include<iostream>
using namespace std;
int main(){
    int a;
    int b;

    //input a 
    cout<<"enter a:";
    cin>>a;
    
    //input b
    cout<<"enter b:";
    cin>>b;

    //calculate sum
    int sum=a+b;
    cout<<"sum ="<<sum<<endl;
    
    //subtraction
    int diff=a-b;
    cout<<"diff ="<<diff<<endl;

    //multiplication
    int mul=a*b;
    cout<<"mul ="<<mul<<endl;
    
    //division
    int div=a/b;
    cout<<"div ="<<div<<endl;

    return 0;
}