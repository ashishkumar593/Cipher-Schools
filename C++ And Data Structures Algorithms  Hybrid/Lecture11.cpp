#include<iostream>
using namespace std;

// int main(){
//     int i;
//     i=1; //initialization
//     while (i<100) // condition
//     {
//         cout<<i<<" ";  //loop
//         i++;           //update
//     }
    
//     return 0;
// }


int main(){
    int i;
    int input;

    // guess the number 65
    // the user has 100 chances

    i=100;

    for(i=1;i<101;i++){
        cin>>input;
        if(input == 65){
            cout<<"Congrats you have guessed correct";
            break;
        }
    }
}