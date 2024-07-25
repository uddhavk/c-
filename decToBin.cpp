#include<iostream>
using namespace std;

void dectobin(int decnum);

int main(){
    dectobin(4);
    return 0;
}

void dectobin(int decnum){
    int n=decnum;
    int power = 1;
    int binNum = 0;

    while(n>0){
        int remainder = n%2;
        binNum += remainder * power;
        n=n/2;
        power = power*10;
    } 

    cout<<"binary of "<<decnum <<" = "<<binNum<<endl; 
}

// int main(){
//     dectobin(4);
//     return
// }