#include<iostream>
using namespace std;


int main()
{
  system("cls");
 int arr[]={10,5,30,15};
 int n=4;
 int d=3;
 int t[d];

for(int i=0; i<d; i++)
{
    t[i]=arr[i];
}

for(int i=0; i<d; i++)
{
    cout<<t[i]<<" ";
}

cout<<endl;

for(int i=d; i<n; i++)
{
    arr[i-d]=arr[i];
}

for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}

cout<<endl;

for(int i=0; i<d; i++)
{
    //cout<<"t[i-d+1] "<<t[i-(d+1)]<<" i = "<<i<<" ";

    arr[n-(d+i)]=t[i];

   // cout<<" a[i] "<<arr[i]<<" ";
}

cout<<endl;

for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}




    return 0;
}