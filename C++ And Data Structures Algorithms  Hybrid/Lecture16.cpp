#include<iostream>
using namespace std;

int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    int a,b;
    a=3;
    b=5;
    int c;
    c=sum(a,b);
    //int sum(int a,int b)  
    cout<<c<<endl;
    cout<<a<<b<<endl; // These values of a , b call after i call the function  

    return 0;
}