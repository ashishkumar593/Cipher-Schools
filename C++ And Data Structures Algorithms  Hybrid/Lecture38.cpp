#include<iostream>
using namespace std;

int main(){
    int a[10];

    int i;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }

    // Start of selection sort

    int least_index;  // Stores the inde of the least element

    int j;

    for(i=0;i<9;i++){

    least_index = i;

    for(j=i;j<10;j++)
    {
        if(a[j]<a[least_index])
        {
            least_index = j; // If we find an index in j=(0,9) at which a[j] is less than the least index which we assumed, then this j will be the new least index
        }
    }

    int temp;
    //Interchanging the first element with least

    temp = a[i];
    a[i] = a[least_index];
    a[least_index] = temp;
    }

    cout<<"The element after sorting are: ";

    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}