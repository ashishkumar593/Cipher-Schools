#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int *p;
    int *q;

    p=&a;
    q=&b;
    a=2;
    b=5; //I am only changing the value, but the addresss of a still same, so the pointer of a is still point to the same a, no matter how the a is being changed 
    *p=3;

    c=*p+*q;

    //q+1;
    //p+1;

    cout<<"The value of a is (from the actual variable type) "<<a<<endl;
    cout<<"The value of a from the pointer using *(astrix indication operator) "<<*p<<endl;
    cout<<"The vaule of c is: "<<c;

    return 0;
}