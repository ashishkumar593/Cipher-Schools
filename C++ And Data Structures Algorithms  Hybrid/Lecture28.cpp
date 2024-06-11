// Access specifier
#include<iostream>
#include<string>
using namespace std;
// class Student{
//     public: 

//     string name;
//     int attendence;
//     float total_marks;

//     void calculate_percentage(){
//         cout<<total_marks<<"%";
//     }
// };

// You are making a software for a bank //

class Bank_Client{
    private:

    // string name;
    int credit_number;
    int cvv;
    string password;
    string name;
    string password;

    public:
    // string user_name;
    // string name;   // We use public function to set private data
                   // Private members are accessible inside class and only inside the class
              // ******** To access stuff of an object you definetly need a public element. as private element of an object are always inacessible

    void set_credit_card_number(int number) {
            credit_number = number;
        }

        // Corrected the method to have a return type and return the value
        int get_credit_card_number() {
            cout << "The credit card number is: " << credit_number << endl;
            return credit_number;
        }

        void set_all_the_stuff_at_once(int number, string user_name, string pass) {
            credit_number = number;
            name = user_name;
            password = pass;
        }
        string get_name() {
            return name;
        }
        void set_name(string user_name) {
            name = user_name;
        }


    // We use get function to get the data
    // We use set function to set the data
};

int main(){
    // Student a,b,c;

    // // Student is the class 
    // // and a,b,c are the objects of that template / class

    // a.name = "Ashish";
    // a.attendence = 90;
    // a.total_marks = 69;

    // a.calculate_percentage();

    Bank_Client a,b,c;
    a.set_name("Ashish");

    a.set_credit_card_number(75456455);
    a.get_credit_card_number();
    // a.password = "Dhieba%";
    // a.cvv = 548;
    // a.credit_number = 5846131319;

    // cout<<"The password of Ashish is "<<a.password<<endl;
    // cout<<a.cvv<<endl;
    // cout<<a.credit_number<<endl;


    return 0;
}