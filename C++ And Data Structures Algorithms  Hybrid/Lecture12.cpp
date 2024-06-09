#include<iostream>
using namespace std;

int main(){
     int password;
     int count=0;

    //  do
    //  {
    //     cin>>password;
    //  } while (password<999999);

    while (password<99) // The condition in the while loop, until it is true , the loop will run.
    {
        cout<<"choclates"<<endl;
        count++;

        if(count>100)break;
    }
    

     

    //  cout<<"Enter the password: ";
    //  cin>>password;

    //  while(password<999999)
    //  {
    //     cout<<"The password does not meet the required condition, Please enter the passord again";
    //     cin>>password;
    //  }

     cout<<"The user has now entered a correct password"<<endl;


     int i;
     for(i=0; ;i++){
        cout<<i;
        if(i>100)break; // This statement gets executed when 1 is 101
     }


    return 0;
}