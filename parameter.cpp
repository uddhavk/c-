#include<iostream>
using namespace std;

int sum(int a, int b=1){
   int sum = a + b;
    return sum;
}

int diff(int a, int b){
    int diff = a - b;
    return diff;
}

int main(){

    int s = sum(99); // b=1 therefore b value is not given, if we want to give we can give value for b
    cout<<"sum = "<<s<<endl;

    int d = diff(6,3);
    cout<<"diff = "<<d<<endl;

    return 0;
}