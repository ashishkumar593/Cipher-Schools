#include<iostream>
using namespace std;

// int main()
// {
//    int a[4];
//    int i;

//    cout<<"Give 5 integers as input"<<endl;

//    for(i=0;i<5;i++)
//    {
//     cin>>a[i];
//    }

//    cout<<"The 5 given inputs are : "<<endl;

//    for(i=0;i<5;i++)
//    {
//     cout<<a[i]<<" ";
//    }
// }

int main(){
    int a[9];
    int i;

    cout<<"Give 10 inntegers as input"<<endl;

    for(i=0;i<9;i++){
        cin>>a[i];
    }

    cout<<"The 10 given input are: "<<endl;

    for(i=9;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }

    return 0;

}