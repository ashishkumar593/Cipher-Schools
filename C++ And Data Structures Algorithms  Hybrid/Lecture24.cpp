// Pointer Passing / Passing by reference
#include<iostream>
using namespace std;

// void swap(int *x, int *y){ // a,b are different
//     int c;      // x and y are the pointers to a,b ---> they store the address of a and b
//                 // To get a,b from x and y we need to dereference the pointer
//     c = *x;
//     *x = *y;
//     *y = c;

//     cout<<"The swapping is completed"<<endl;
// }

// int main(){
//     int a,b;
//     a=3;
//     b=4;

//     /* int c
//     c = a;
//     a = b; */

//     swap(&a,&b);  // Passing the address of a and b to the function

//     cout<<"The values of a and b afer the swap are: "<<a<<" "<<b;
//     return 0;
// }


int main(){
    int a[10];

    cout<<"Values for comparison: "<<endl;

    cout<<"The value of a            is "<<a<<endl;
    cout<<"The value of address a[0] is "<<&a[0]<<endl;
    cout<<"The value of address a[1] is "<<&a[1]<<endl;\

    return 0;
}