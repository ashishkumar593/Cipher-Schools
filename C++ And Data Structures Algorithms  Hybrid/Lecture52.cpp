/******************FUNCTION IN CLASSES**********************/
#include<iostream>
using namespace std;

// We achieve this using something called a "class"
// A class is a user defined which can be customized however we want

class Student
{
    public:

    // There is also something called a private access specifier

    string name;
    int mids;
    float ends;
    bool pre_abs;

    // I also want to find the marks of a student

    void display_calculate_marks()  // These are the parameter which must be passed while the function of this class is being called
    {
        float total_marks;
        total_marks = mids*0.5 + ends * 0.75;

        cout<<"The marks of "<<name<<"is "<<total_marks;
    }

    void totalmarksincludingproject(int project_marks)
    {
        cout<<mids+ends+project_marks;
    }

    void calculate_fail_probability()
    {
        if(ends<=10) cout<<"Yes this student needs to attend the same class for one more year";
    }
};

class Car
{
    public:
    string car_name;
    string tyre_name;
    int number_of_tyres;
    int number_of_seats;
    int number_of_miles_travelled;

    void distancetravelled()
    {

    }
};

int main(){
    // There are a class of 30 students and each students has the following data associated with him: 
    Student a;  // Hre a,b,c are of type Student

    // int d,e,f; // Here d,e,f are of type int

    // Car hyundai, suzuki, ferrari;

    // a,b,c over here are objects of the particular class
    a.name = "Ashish";
    a.mids = 50;
    a.ends = 99.5;
    a.pre_abs = 1;

    a.display_calculate_marks();
    a.totalmarksincludingproject(10);

    Car b;
    b.car_name = "verna";
    b.number_of_seats = 2;
    b.number_of_tyres = 4;
    b.tyre_name = "Michellen";

    return 0;
}