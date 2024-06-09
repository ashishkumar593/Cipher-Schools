#include<iostream>
using namespace std;

int main()
{
//    int x; // variable name x of typre int ---> It store a single integer which means x can either 1 or 2 single interger
    
    // Arrays can be used to store multiuiple values in a single variable name

//    int a[5]; // This meas it is an array of name a which can store mutiple integer , It can store 6 integers
              // Note: The indexing of array starts from 0 not 1.

              //Elements starting  from 0-5

              // The first element will have an index 0 ---> a[0]
              // The second element will have an index 1 ---> a[1]

              //And goes till a[5]


int a,b,c,d,e;
cout<<"Give 5 integer as input"<<endl;
cin>>a>>b>>c>>d>>e;

cout<<"The integers in reverse order are: "<<e<<d<<c<<b<<a;

return 0;
}