/************* BINARY SEARCH **************/
#include<iostream>
using namespace std;

void simplesearch(int 8arr, int l, int r, int val)
{
    // we have to check whether val is present in the array between the indexes l and r

    int i;

    // Here we are omparing the 'val' which we have to search with each and every element in the array

    for(i=l;i<r+1;i++)
    {
        cout<<"Congrats your calue is present in the array ";
        return;
    }

    cout<<"Sad vro, your value is not present in the array ";
    return;

}

int binarysearch(int *arr, int l, int r, int val)
{
    int middle;

    middle = l+ (r-1)/2;

    if(r>=1) 
    {

        if(arr[middle] == val)
        {
            return1;
        }
        else if(arr[middle]>val)
        {
            // Then the val will definately lie on the left side of the array

            return binarysearch(arr,l,middle-1,val);
        }
        else{
            return binarysearch(arr,middle+1,r,val);
        }
    }
}

int main(){
    int arr[7] = {1,3,10,2,4,7,5}
    int size = 7;

    simplesearch(arr,0,6,13);
    simplesearch(arr,0,6,10);

    if(binarysearch(arr,0,6,10)==1)
    {
        cout<<"Your value is pressent in the array";
    }


    return 0;
}
 