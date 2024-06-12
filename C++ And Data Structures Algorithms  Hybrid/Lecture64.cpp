/********** MERGE SORT **********/

#include<iostream>
using namespace std;

void merge(int * arr, int start, int end)
{
    // we need to merge the 2 sorted array which we have recived

}

void mergeSort(int *arr, int start, int end)
{

    // This recursion needs to have a base case:
    // What is the base case: the base case is when there is only 1 element:

    // It will be easier for us if there are the 2 sorted arrays separately
    // so we create 2 sorted arrays

    int mid = (start+end)/2;
    int len1, len2;
    len1 = mid - start +1;  // Size of first arary
    len1 = end - mid;       // Size of second array

    // Creating the new arrays of size which we found

    int * arr1 = new int[len1];
    int * arr2 = new int[len2];

    // Creating the arrays by coping the elements

    int main_arr_index; // So that we can keep track of which element of the main array we are currently transversing
    main_arr_index = start;
    int i;

    for(i=0;i<len1;i++)
    {
        arr[i] = arr[main_arr_index];
        main_arr_index++;
    }

    for(i=0;i<len2;i++)
    {
        arr2[i] = arr[main_arr_index];
        main_arr_index++;
    }

    // Now we have copied both arrays , we need to completely sort the main array

    int index_1, index_2;
    index_1 = 0;
    index_2 = 0;

    main_arr_index = start;

    // We only need to increase the index of the element which is less and getting placed in the main array

    while(index_1<len1 && index_2<len2)
    {
        if(arr[index_1]<arr2[index_2])
        {
            // This means the element in arr1 is lesser, so since we sorting by increaseing order

            arr[main_arr_index] = arr2[index_1];
            main_arr_index++;
            index_1++;
        }
        else
        {
            arr[main_arr_index] = arr2[index_2];
            main_arr_index++;
            index_2++;

        }
    }

    while(index_1<len1)
    {
        arr[main_arr_index] = arr2[index_1];
            main_arr_index++;
            index_1++;
    }

    while(index_2<len2)
    {
        arr[main_arr_index] = arr2[index_2];
            main_arr_index++;
            index_2++;

    }

    if(start>=end)  // This implies there is only 1 element and now cannot split further
    {
        return;
    }

    int mid;
    mid = (start+end)/2;

    // We are also using the same code to sort smaller arrays

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    // But after we have sorted the smaller arrays, we need to merge them to get the bigger arrays

    merge(arr,start,end);
}

int main(){
    int size_arr;
    int arr[5] = {1,5,3,10,4};
    size_arr = 5;

    mergeSort(arr,0,4);

    int k;
    for(k=0;k<size_arr;k++)
    {
        cout<<arr[k]<<" ";
    }

    return 0;
}