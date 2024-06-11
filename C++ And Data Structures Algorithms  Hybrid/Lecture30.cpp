// Constructors And Deconstructors
#include<iostream>
using namespace std;

class Complex{
    private:
    float real;
    float img;

    public:

    Complex(int real_values, int img_values)
    {
        real = real_values;
        img = img_values;
    }

    void set_parameters(int real, int img){
        this->real = real;
        this->img = img;
    }

    void SqdistancefromOrigin(){
        float dist;
        dist = real*real + img*img;

        cout<<"The distance from origin is "<<dist;

        return;
    }
};
// I am a merchant and defining a class to store the amount which the user gives to me and the number of days it been since the user has given me the money 
class New_Account
{
    public:
    int amount;
    int days;
    // Since  a constructor has no return type, we don't need to write anythinng at the start like int, void stuff.
    New_Account(int amount_initial, int days_initial){
        amount = amount_initial;
        days = days_initial;

        cout<<"The constructor is called now ";
    }

    void print_account_details()
    {
        cout<<"The ammount is "<<amount;
        cout<<"The number of days is "<<days<<endl;
    }
    ~New_Account()
    {
        cout<<"Now the  use of this object is complete and The object is gettting destroyed";
    }

    // void initial(){
    //     amount = 0;
    //     days = 0;
    // }
};

class motorbike
{
    public:
    int num_wheels;
    int lights;
};

// int main(){
//     Complex a,b;
//     a.set_parameters(3,4);

//     a.SqdistancefromOrigin();

//     return 0;
// }

int main(){
    New_Account a(0,0);
    a.print_account_details();
    // a.initial();
    // This function needs to be called everytime the object is created to set the parameters 

    // a.amount++;
    // a.days++;

    New_Account b(100,5);
    b.print_account_details();

    cout<<endl<<"Here all the function and calculation take place"<<endl;

    Complex(3,3);
    Complex(3,5);
    return 0;
}