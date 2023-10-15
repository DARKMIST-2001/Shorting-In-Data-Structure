#include<iostream>
using namespace std;

    void countingSort(int ayan[],int size,int range)
    {
        int output_array[size];
        int count_array[range];
        for(int i=0;i<range;i++)
        {
            count_array[i]=0;
        }
        for(int i=0;i<size;i++)
        {
            ++count_array[ayan[i]];
        }
        for(int i=1;i<range;i++)
        {
            count_array[i]=count_array[i]+count_array[i-1];
        
        }
        for(int i=0;i<size;i++)
        {
            output_array[--count_array[ayan[i]]]=ayan[i];
        }
        for(int i=0;i<size;i++)
        {
            ayan[i]=output_array[i];
        }

    }


int main()
{
    int size=20;
    int range=10; 
    int ayan[size]={0,3,1,5,7,9,6,9,0,4,3,0,2,8,8,9,3,4,6,5};
    cout<<"****Before Sorting***"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<ayan[i]<<" ";
    }
    cout<<endl;
        countingSort(ayan,size,range);
cout<<"****After Sorting***"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<ayan[i]<<" ";
    }


    return 0;
}