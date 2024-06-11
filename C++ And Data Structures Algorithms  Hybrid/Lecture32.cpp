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

};
// Now I will inherit the feature of the base class into the derived class
class SchoolBus: public Vehicle
{


    string school_name;

    int number_holidays;

    public:

    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;
    }

    void printname()
    {
        cout<<"hjbsfd"<<name;
    }
    

};

class Car: public Vehicle
{
    // No member named mileage
    // No member function named calcuatemileage
    public:
    int number_airbags;
    int ac_consumption;

    public:

    void set_mileage(int mileage)
    {
        this->mileage = mileage;
    }

    void printname()
    {
        cout<<name;
    }


};

class SUV: public Car{
    public:

    int Four_Wheeldrive;
};

int main()
{
    SUV a;
    Car a;
    SchoolBus b;

    a.name = "Suzuki";
    b.name = "Toyta";

    a.printname();
    cout<<endl;
    b.printname();

    // a.set_mileage(50);
    // a.calculatemileage();

    return 0;
}


// The base class is public