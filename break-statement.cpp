#include<iostream>
using namespace std;

int main(){

    int i = 1;
    
    while(i<=10){

        if(i==5){
            break;
        }
        cout<<i<<endl;
        i++;
    }
    cout<<"out of the loop now"<<endl;
    return 0;   
}