#include<iostream>
using namespace std;
int main()
{
    int j,temp;
int myarray[5];
while(1){
        cout<<endl;
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

       for(int i=1;i<5;i++)
       {
           temp=myarray[i];
           j=i-1;
           while(myarray[j]>temp && j>=0)
           {
               myarray[j+1]=myarray[j];
               j--;
           }
           myarray[j+1]=temp;
       }

cout<<"Array after insertion Sorting :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<myarray[i]<<" ";
    }
}

return 0;
}

