/*************** TREE ****************/
#include<iostream>
using namespace std;

// This is how the node of tree is defined.

class Node
{
    public:

    int data;
    Node * left;
    Node * right;

    // Note : Since each node has the address ton the node corresponding to the left and right of the root, we are able to access the whole tree from the root node itself
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
};

void buildTree(Node * root)
{
    // This is the start of the creation of a binary  tree

    int var;

    cout<<"Enter the value which you want to be present at hte root node : ";

    cout<<"Enter the value: ";
    cin>>var;

    // If the user input -1, that means therre is no node present over there 

    if(var==-1) return;

    root = new Node(var);


    cout<<"Now enter the data which you want to be the left of "<<var<<" ";
    buildTree(root->left);
    cout<<"Now enter the data which you want to be the right of "<<var<<" ";
    buildTree(root->right);
}

// First  we will look at pre-order transversal

// pre order transversal implies that we first transverse the node, then  element to the left of it

int main(){
    
    // Now since we have created a node , let us start with the creation of a binary search tree

    Node *  root;
    buildTree(root);

    return 0;
}