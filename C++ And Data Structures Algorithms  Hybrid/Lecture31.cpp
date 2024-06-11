// Object Oriented Programming 
#include<iostream>
using namespace std;

// class Student
// {
//     private:

//     int  marks;
//     int attendence;
//     string name;

//     public:

//     void displaymarks()
//     {
//         cout<<marks;
//     }
// };

// int main(){
//     int marks;
//     int attendence;
//     string name;
//     return 0;
// }

class Vehicle  // The vehicle is a base class
{
    public:

    int number_typers;
    string name;
    int capacity;
    int mileage;

    public:

    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;
    }
};
// Now I will inherit the feature of the base class into the derived class
class SchoolBus: public Vehicle
{

    int number_typers;
    string name;
    int capacity;
    int mileage;

    string school_name;

    int number_holidays;

    public:

    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;
    }

    void printnameofschool()
    {
        cout<<"The name of the school is "<<name;
    }
    

};

class Car: public Vehicle
{
    // No member named mileage
    // No member function named calcuatemileage
    private:
    int number_airbags;
    int ac_consumption;

};

int main()
{
    Car a;
    a.calculatemileage();

    return 0;
}