#include<iostream>
using namespace std;

int main(){

    int n = 4;
    char element = 'A';

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<element;
            element++;
        }
        cout<<endl;
    }
    return 0;
}