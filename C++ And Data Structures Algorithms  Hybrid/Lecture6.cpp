#include<iostream>
using namespace std;

// int main(){
//     float a,b;

//     cin>>a>>b;

//     if(a>0.01 && b>a)
//     {
//         cout<<"The condition in if statement is correct";
//     }
//     else{
//         cout<<"The condition is false";
//     }
// }

// int main(){
//     int marks;
//     cout<<"Student, please enter the marks to calculate the grade: ";
//     cin>>marks;

//     if(marks>90)
//     {
//         cout<<"A";
//     }
//     else if(marks<90 && marks>80) 
//     {
//         cout<<"B";
//     }
//     else if(marks<80 && marks>70)
//     {
//         cout<<"C";
//     }
//     else
//     {
//         cout<<"Pass";
//     }
// }


// int main(){
//     int a,b,c,d;
//     cout<<"Give four integers as input : a,b,c,d"<<endl;
//     cin>>a>>b>>c>>d;

//     if(a>b && c>d)
//     {
//         cout<<"haha";
//     }
//     else if(a>b && c<d)
//     {
//         cout<<"hehe";
//     }
//     else
//     {
//         cout<<"huhu";
//     }

// }

int main(){
    int a;
    cout<<"Enter an integer a";
    cin>>a;

    switch(a)
    {
        case 1:
        cout<<"The value of a is 1"<<endl;
        break;
        case 2:
        cout<<"The value of a is 2"<<endl;
        break;
        case 3:
        cout<<"The value of a is 3"<<endl;
        break;
        default:
        cout<<"Default will be always printed";
    }
}