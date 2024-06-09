#include<iostream>
using namespace std;

void PrintHi()  // No paramenter are required.
{
    cout<<"Hi"<<endl;
    return;
}

int sum(int a, int b) // Formal parameter
{
    int c;
    c = a=b;
    return c;
}

int main(){
    PrintHi(); // First calliung the PrintHi function

    int a,b;
    a=4;
    b=6;
    int  d;
    d = sum(a,b);  //Actual parameter

    cout<<"The sum is equal to"<<d;
    return 0;
}

