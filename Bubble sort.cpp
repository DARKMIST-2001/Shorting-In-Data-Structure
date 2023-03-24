#include<iostream>
using namespace std;
int main()
{
int myarray[5];
cout<<"Enter your Arrays Number :"<<endl;
for(int i=0;i<5;i++)
{
    cin>>myarray[i];
}

cout<<"Array before Sorting :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<myarray[i]<<" ";
    }
cout<<endl;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-1-i;j++)
        {
            if(myarray[j]>myarray[j+1])
            {
                int temp=myarray[j];
                myarray[j]=myarray[j+1];
                myarray[j+1]=temp;
            }
        }
    }
cout<<endl;

cout<<"Array after Sorting :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<myarray[i]<<" ";
    }

return 0;
}
