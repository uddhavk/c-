#include<iostream>
using namespace std;

int sum(int a, int b){

    cout<<(a+b)<<endl;
    return a+b;
}

int sum(int a, int b,int c){

    cout<<(a+b+c)<<endl;
    return a+b+c;
}

double sum(double a,double b){
cout<<(a+b)<<endl;
return a+b;
}

int main(){
    sum(2,3);
    sum(22,33);
    sum(1.5,2.5);
    sum(22,28,0);

    return 0;
}
