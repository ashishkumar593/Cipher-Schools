/*************** QUICK SORT *******************/
#include<iostream>
using namespace std;

int partition(int *arr, int start, int end)
{
    // This function place the start element in its correct position and return this position vaolue

    // First step is to find the correct position of the start element

    // Finding all the element which are less than the partition element

    int i,number_lessthan_part;
    for(i=start+1,number_lessthan_part=0;i<end++;i++)
    {
        if(arr[i]<arr[start])
        {
            // This means that this element will be to the left of the partition element
            number_lessthan_part++;
        }
    }

    // Now the actual index will just be:
    int correct_index;

    correct_index = start + number_lessthan_part;

    // i will simply swap the start element and the correct index element'
    int temp;

    // placing the start element in its actual position

    temp = arr[start];
    arr[start] = arr[correct_index];
    arr[correct_index] = temp;

    // Now after we have placed this element in its correct position, we need to make that sure that this is actual its actual postion

    // Making sure that this element os at its correct position

    int i,j;

    i = start;
    j = end;

    while(i<correct_index && j>correct_index)
    {
        while(arr[i]<arr[correct_index])
        {
            i++;
        }

        while(arr[j]>arr[correct_index])
        {
            j--;
        }

        if(i<correct_index && j>correct_index)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }

    return correct_index;
}

void quickSort(int *arr, int start, int end)
{

    if(start>=end) return;

    // partition is the element which is at its "correct place " --> its position doesn't change even after we sort the number

    // First step is to bind a partition such that its

    int partition_index;

    partition_index = partition(arr, start, end);

    // This function will return the actual position of the start element

    // Since after running the function, i know that start element is placed in its  correct position and we know that position through partition_index we dont need to change the position of the index anymore

    quickSort(arr,start,partition_index-1);
    quickSort(arr, partition_index, end);



}

int main(){
    int size;

    int arr[7] = {5,1,3,10,7,14,2};
    size=7;

    quickSort(arr,0,size-1);

    int k;
    for(k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }

    return 0;
}