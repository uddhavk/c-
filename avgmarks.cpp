#include<iostream>
using namespace std;
int main(){
     int eng;
     int maths;
     int sci;

     cout<<"enter marks of eng:";
     cin>>eng;

     cout<<"enter marks of maths:";
     cin>>maths;

     cout<<"enter marks of sci:";
     cin>>sci;

     int avg = (eng + maths + sci)/3;
     cout<<"avg = "<<avg<<endl;

    return 0;
}