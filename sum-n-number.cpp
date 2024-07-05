#include<iostream>
using namespace std;

int main(){
int n;
int i;
int sum=0;

cout<<"enter the number:";
cin>>n;

for(i=0;i<=n;i++){
   sum=sum+i;
}
cout<<"sum = "<<sum<<endl;
return 0;
}