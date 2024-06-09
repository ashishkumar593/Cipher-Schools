#include<iostream>
using namespace std;

void printstuff(){
    cout<<"Writing my first function";
}

int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    printstuff();
    int a,b;
    int add_sum;
    a=3;
    b=5;
    add_sum = sum(a,b);
    cout<<add_sum;
    return 0;
}

// functio header
// function body
// void function
// function return type, name, input values
// int main()
// int Comparer(int a,int b)
// The first line contains the return-value-type, the
// function name, and optionally a set of comma-
// separated arguments enclosed in parentheses
// • Each argument has an associated type
// declaration
// • The arguments are called formal arguments or
// formal parameters
// The body of the function is actually a block of
// statement that defines the action to be taken by the
// function

//******RETURN VALUE */
// In a value-returning function (result type is not void), return does two distinct things:
// • specify the value returned by the execution Of the function
// • terminate that execution of the callee and transfer control back to the caller
// A function can only return one value
// • The value can be any expression matching the return type
// • but it might contain more than one return statement.
// • In a void function
// • return is optional at the end Of the function body.
// • return may also be used to terminate execution of the function explicitly.
// • NO return value should appear following return.
