#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"enter a:";
    cin>>a;

     cout<<"enter b:";
    cin>>b;

     cout<<"enter operator:";
    cin>>op;

    //using else if:-

    // if(op=='+'){
    //     cout<<" a + b = "<<(a+b)<<endl;
    // }else if (op=='-')
    // {
    //     cout<<" a - b = "<<(a-b)<<endl;
    // }else if (op=='*')
    // {
    //     cout<<" a * b = "<<(a*b)<<endl;
    // }else if (op=='/')
    // {
    //     cout<<" a / b = "<<(a/b)<<endl;
    // }else{
    //     cout<<"Invalid Operator";
    // }

    //Using switch case:-

    switch (op) {
    case '+':cout<<" a + b = "<<(a+b)<<endl;
    break;

    case '-':cout<<" a - b = "<<(a-b)<<endl;
    break;

     case '*':cout<<" a * b = "<<(a*b)<<endl;
    break;

    case '/':cout<<" a / b = "<<(a/b)<<endl;
    break;

    default: cout<<"Invalid Operator";
    }

   



    return 0;
     
}