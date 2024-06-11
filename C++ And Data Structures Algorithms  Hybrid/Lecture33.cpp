// // *****************POLYMORPHISM**************
// #include<iostream>
// using namespace std;

// class Coordinate
// {
//     public:

//     float a;
//     float b;

//     public:

    

//     void sqdistrancefromcoordinate(float a)
//     {
//         float dist;

//         dist = (this->a-a)*(this->a-a)+(this->b-a)*(this->b-a);

//         cout<<dist;
//     }
//     void sqdistrancefromcoordinate(float a, float b)
//     {
//         float dist;

//         dist = (this->a-a)*(this->a-a)+(this->b-b)*(this->b-b);

//         cout<<dist;
//     }
//     void sqdistrancefromcoordinate(float a, float b, float c)
//     {
//         float dist;

//         dist = (this->a-a)*(this->a-a)+(this->b-b)*(this->b-b);

//         cout<<dist;

//         cout<<"The thirdd fuction is used";
//     }
// };

// int main(){
//     Coordinate x;
//     x.a = 0;
//     x.b!= 0;

//     x.sqdistrancefromcoordinate(0);
//     x.sqdistrancefromcoordinate(0,0);
//     x.sqdistrancefromcoordinate(0,0,0);

//     return 0;
// }

// **************OVERLOADING OPERATOR**********
#include<iostream>
using namespace std;

class Coordinate
{
    public:
    float a;
    float b;

    Coordinate operator+(Coordinate const & obj)
    {
        Coordinate z;

        z.a = this->a + obj.a;
        z.b = this->b + obj.b;

        return z;
    }


};

int main(){
    Coordinate x;

    x.a = 3;
    x.b = 4;

    Coordinate y;

    y.a = 5;
    y.b = 6;

    Coordinate z;

    z = x+y;

    cout<<"The coordinate after addition are "<<z.a<<" "<<z.b;
    return 0;
}