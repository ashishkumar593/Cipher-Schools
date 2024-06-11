// /******STACK AND QUEUE*******/
// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;

// int main(){
//     stack<int> a;

//     a.push(5);
//     a.push(6);
//     a.push(7);

//     cout<<a.top()<<endl;

//     a.pop();

//     cout<<a.top()<<endl;

//     if(a.empty()==0)
//     {
//         cout<<"The stack is currently not empty"<<endl;
//     }
//     else{
//         cout<<"The stack is empty";
//     }

//     a.pop();
//     a.pop();

//     if(a.empty()==0)
//     {
//         cout<<"The stack is currently not empty"<<endl;
//     }
//     else{
//         cout<<"The stack is empty";
//     }
//     return 0;
// }


// int main(){
//     queue<int> a;

//     a.push(5);
//     a.push(6);
//     a.push(7);

//     //  7  6  5

//     cout<<a.front()<<endl;

//     a.pop();

//     cout<<a.back()<<endl;

//     if(a.empty()==0)
//     {
//         cout<<"The queue is currently not empty"<<endl;
//     }
//     else{
//         cout<<"The queue is empty";
//     }

//     a.pop();
//     a.pop();

//     if(a.empty()==0)
//     {
//         cout<<"The queue is currently not empty"<<endl;
//     }
//     else{
//         cout<<"The queue is empty";
//     }
//     return 0;
// }

/*************MAP*****************/
// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string,int> hash;

//     hash["Hi"] = 1;
//     hash["programming"] = 2;
//     hash["Ashish"] = 3;

//     cout<<"The value of Hi in the hashtable is "<<hash["c++"];

//     for(auto j=hash.begin();j!=hash.end();j++){
//         cout<<"The key will be "<<j->first<<"The value in the key will be "<<j->second;
//     }
//     return 0;
// }

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> a;

    a.push_back(4);
    a.push_front(2);
    a.push_back(3);
    a.push_front(2);

    a.pop_back();
    a.pop_front();

    a.sort();

    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<*i;
    }
    return 0;
}