#include<iostream>
using namespace std;

int main(){
    int n;

    do{
         cout<<"enter your number ";
         cin>>n;

         if(n%10==0){
            break;
         }

         cout<<"you entered "<<n<<endl;
    }while(n>0);
    return 0;
}