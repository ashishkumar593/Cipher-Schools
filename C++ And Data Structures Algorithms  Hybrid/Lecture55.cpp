/****************LINKED LIST*******************/
#include<iostream>
using namespace std;

class node
{
    public:
    int data; // Let as assume for that the data which the linked list is storing in int
    
    node * next;

    node(int data_input)
    {
        this->data = data_input;
        this->next = NULL;
    }
};

// Helper function 

void printnode(node * &node)
{
    cout<<"Value "<<node->data;
    cout<<"Address "<<node->next;
}

int main(){
    node * node1 = new node(3);
    node * node2 = new node(7);
    node * node3 = new node(8);


    node1->next = node2;
    node2->next = node3;

    printnode(node1);
    cout<<endl<<node2<<endl;
    printnode(node2);
    cout<<endl<<node3<<endl;
    printnode(node3);


    return 0;
}
