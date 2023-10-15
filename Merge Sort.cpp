#include<iostream>
using namespace std;


void merge(int ayan[],int l,int m,int r)
{
    int i=l;
    int j=m+1;
    int k=l;
    int temp[5];

    while(i<=m && j<=r)
    {
        if(ayan[i]<ayan[j])
        {
            temp[k]=ayan[i];
            i++;
            k++;
        }
        else
        {
             temp[k]=ayan[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
         temp[k]=ayan[i];
            i++;
            k++;
    }
    while(j<=r)
    {
         temp[k]=ayan[j];
            j++;
            k++;
    }

    for(int c=l;c<=r;c++)
    {
        ayan[c]=temp[c];
    }
}

void mergeSort(int ayan[], int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergeSort(ayan,0,m);
        mergeSort(ayan,m+1,r);
        merge(ayan,l,m,r);
    }
}


int main()
{
int ayan[5]={5,8,2,6,1};
cout<<"******Before Sorting:*********"<<endl;
for(int i=0;i<5;i++)
{
    cout<<ayan[i]<<" ";
}
cout<<endl;
cout<<endl;

mergeSort(ayan,0,4);

cout<<"******After Merge Sorting:*********"<<endl;
for(int i=0;i<5;i++)
{
    cout<<ayan[i]<<" ";
}

return 0;
}