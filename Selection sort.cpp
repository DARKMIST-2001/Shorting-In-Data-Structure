#include<iostream>
using namespace std;
int main()
{

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

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(myarray[j]<myarray[i])
            {
                int temp=myarray[j];
                myarray[j]=myarray[i];
                myarray[i]=temp;
            }
        }
    }
cout<<endl;

cout<<"Array after selection Sorting :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<myarray[i]<<" ";
    }
}

return 0;
}

