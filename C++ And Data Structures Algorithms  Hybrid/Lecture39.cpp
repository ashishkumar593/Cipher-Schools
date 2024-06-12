/**************BUBBLE SORT****************/
#include<iostream>
using namespace std;

int main(){
    int i;
    // we have 10 element which we have to sort
    int a[10];
    cout<<"Enter the elements which you want to sort: ";

    for(i=0;i<10;i++)
    {
        cin>>i;
    }

    int j;

    for(j=0;j<9;j++)
    {

        int temp;

        for(i=0;i<10-j;i++)
        {
            if(a[i+1]<a[i]) // If the number to the right is less than the number to the left, we are interchanging the number
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}