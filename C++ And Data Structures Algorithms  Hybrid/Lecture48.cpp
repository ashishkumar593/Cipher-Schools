/**************GREEDY ALGORITHM***************/
#include<iostream>
using namespace std;

void printmaxclassesattend(int start[], int end[], int class_id[])
{
    cout<<"The classes which you should attend to cover maximum of them (hopefully you do): "<<endl;
    cout<<class_id[0];

    int i,end_of_the_currently_attending;

    end_of_the_currently_attending = end[0];

    for(i=0;i<9;i++)
    {
        if(start[i]>=end[i-1])
        {
            cout<<class_id[i];
            end_of_the_currently_attending = end[i];
        }
    }
}

int main(){
    int start[] = {2,2,4,1,5,8,9,11,13};
    int end[] = {3,5,7,8,9,10,11,14,16};
    int class_id[] = {4,2,3,1,5,6,7,8,9};

    return 0;
}