// Array and Strings
#include<iostream>
#include<string>
using namespace std;

// int main(){
//     string name;

//     cin>>name;

//     int i;
//     for(i=0;i<5;i++){
//         cout<<name[i]<<endl;
//     }
//     return 0;
// }

// int main(){
//     // string a;
//     // string b;
//     string c;
//     int a;
//     int b;
//     int c;

//     cin>>a;

//     cout<<"Your full name is: "<<endl;


//     c = a+b;  // This is called string concatenation Or in simple term string addition

//     cout<<"The combined word is: "<<c;
//     cout<<"The length of the combined name is: "<<c.length();

//     return 0; 

// }

int main(){
    string a;
    string b;
    string c;
    //cin>>a;
    getline(cin,a);
    cout<<"Your full name is: "<<a<<endl;

    return 0;
}