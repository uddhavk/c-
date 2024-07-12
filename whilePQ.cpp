#include<iostream>
using namespace std;

int main(){

int n = 10829;
int sum=0;

while(n>0){
    int lastdig = n%10;
     sum += lastdig;
    n=n/10;
}

cout<<"sum ="<<sum<<endl;
return 0;
}