/**************** RECURSION *********************/
#include<iostream>
using namespace std;

int fib(int input) // The point at which you want the fibnacci sequence to exist
{
    // Base case, that is the point where the recursion stops, and is really important 

    if(input==0 || input==1)
    {
        return 1;
    }
    int Final_answer;

    Final_answer = fib(input-1) + fib(input-2); // For which we have used the same funtion again and again 
    return Final_answer;
}

int main(){
    int input;

    cout<<"Enter the number you want to find the fibonicci series to: ";
    cin>>input;

    cout<<fib(input);

    return 0;
}