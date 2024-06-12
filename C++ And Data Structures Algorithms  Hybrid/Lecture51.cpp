/******************INTRODUTION TO CLASSES**********************/
#include<iostream>
using namespace std;

// We achieve this using something called a "class"
// A class is a user defined which can be customized however we want

class Student
{
    public:

    string name;
    int mids;
    float ends;
    bool pre_abs;
};

class Car
{
    public:
    string car_name;
    string tyre_name;
    int number_of_tyres;
    int number_of_seats;
};

int main(){
    // There are a class of 30 students and each students has the following data associated with him: 
    Student a,b,c;  // Hre a,b,c are of type Student

    int d,e,f; // Here d,e,f are of type int

    Car hyundai, suzuki, ferrari;

    // a,b,c over here are objects of the particular class


    return 0;
}