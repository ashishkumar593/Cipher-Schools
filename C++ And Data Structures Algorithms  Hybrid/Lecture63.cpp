/********** MERGE SORT **********/

#include<iostream>
using namespace std;

void merge(int * arr, int start, int end)
{
    // we need to merge the 2 sorted array which we have recived

}

void mergeSort(int *arr, int start, int end)
{

    if(start>=end)
    {
        return;
    }

    int mid;
    mid = (start+end)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}

int main(){
    int size_arr;
    int arr[5] = {1,5,3,10,4};
    size_arr = 5;

    mergeSort(arr,0,size_arr-1);

    return 0;
}