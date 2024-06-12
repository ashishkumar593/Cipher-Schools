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

void printlinkedlist(node * &head)
{
    if(head==NULL)
    {
        cout<<"The linked list is still empty!"<<endl;
        return;
    }
    node *temp;
    temp = head;

    // This is called the transversing of a linked list

    while(temp!=NULL)
    {
        cout<<temp->data<<" -->";
        temp = temp->next;
    }
    cout<<endl;
}

void Insertatstart(node * &head, int data)
{
    node * temp = new node(data);\

    if(head==NULL)
    {
        head = temp;
        return;
    }


    temp->next = head;  // WHere temp is the new head and now , we need to assign the address of the old head to it.
    head = temp;
}

void Insertatend(node * &head,int data)
{
    node *temp = new node(data);

    if(head==NULL)
    {
        head = temp;
        return;
    }
    node *end;
    end =head;

    while(end->next!=NULL)
    {
        end = end->next;
    }

    // Afer this while loop is complete , we have basicaly reached the end element
    end->next = temp;
}

void Insertatmiddle(node * &head,int location, int data)
{
    node *temp = new node(data);

    node *var = head;

    // Loop to check whether loacation  exists or not

    while(var->data!=location)
    {
        var = var->next;
        if(var==NULL)
        {
            cout<<"The location doesn't exist check the location";
            return;
        }
    }

    temp->next =var->next;
    var->next = temp;

}

void deletenode(node * &head, int data)
{
    if(head->data == data)
    {
        cout<<"The head of the linked list is going to be deleted !!"<<endl;
        head = head->next;
        return;
    }

    node *temp;
    node *prev;
    temp =head;

    while(temp->data!=data)
    {
        if(temp->next==NULL)
        {
            cout<<"The element to be deleted doesn't exist "<<endl;
            return; 
        }
        prev=temp;
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        prev->next = NULL;
        return;
    }

    prev->next = prev->next->next;
}

int main(){

// Head of a linked list is nothing but a fancy term to indicate the top and first term
    node * head = NULL;

    Insertatend(head,5);
    Insertatend(head,7);
    Insertatend(head,8);

    Insertatstart(head,3);
    Insertatstart(head,2);

    Insertatend(head,9);
    Insertatend(head,10);

    Insertatmiddle(head,3,4);

    deletenode(head,2);
    deletenode(head,6);

    printlinkedlist(head);


    return 0;
}


