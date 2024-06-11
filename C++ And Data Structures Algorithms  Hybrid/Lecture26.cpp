// String
#include<iostream>
using namespace std;

// int main(){
    
//     char name[5];

    
//     int i;

//     for(i=0;i<5;i++){ // I used a loop which ran from 1 in [0,4]
//         cin>>name[i];
//     }

//     cout<<"The name you have just entered is "<<endl;
//     for(i=0;i<5;i++){
//         cout<<name[i];
//     }
//     return 0;
// }


// int main(){
//     char name[1000];

//     cout<<"Enter your name : (Note: Enter # after the end of your name: )";

//     int i;

//     while(name[i]!='#'){   // Here i is the previous input 
//         cin>>name[i];
//         i++;   // When the name is begin entered,  the value of i increasing 
//     }

//     i=0;   //Again need to change the value of i to 0 before runnig the second while loop

//     cout<<"The name you have just entered is "<<endl;

//     while(name[i]!='#'){  //We have again used i
//         cout<<name[i];
//     }

//     return 0;
// }



int main(){
    string name;  // over here string is a new datatye and not a name so string is similar to int, float

    cin>>name;

    cout<<name;
}