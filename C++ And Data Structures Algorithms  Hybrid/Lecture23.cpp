#include<iostream>
using namespace std;

int main(){
    // int a=5;
    // int *x;
    // x=&a;

    // cout<<"THe address of a, which is stored in the pointer x is: "<<x<<"The value of x+1 is "<<x+1;
    
    int a[5];
    int *x;
    int i;
    
    x=&a[0];

    for(i=0;i<6;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}