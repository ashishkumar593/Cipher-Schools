#include<iostream>
using namespace std;

void swap(int a, int b)
//void swap(int &a, int &b)

// By including the keyword and after than name of the datatype and before the variable name we are able to change the actual parameters. 
{
int c;
c=a;
a=b;
b=c;

cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b;
return;
}

int fun(int &a,int b)
{
    a=9999;
    b=9999;
}

int main(){
    int a,b;
    a=4;
    b=6;

    swap(a,b);

    cout<<"The values of a and b after swapping outside the function are: "<<a<<" "<<b;  // after adding fun it passes the value of fun

    return 0;
}