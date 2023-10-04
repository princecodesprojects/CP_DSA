#include<iostream>
using namespace std;

int mean(int arr[],int N)
{
   int s=0;
   for(int i=0;i<N;i++)
    s=s+arr[i];
    int m=s/N;
    return m;
}
int median(int arr[],int N){
   if(N%2==0)
   {
      int i=(N/2)-1;
      int v=(arr[i]+arr[N/2])/2;
      return v;
   }
   else
   {
      return arr[N/2];
   }
}

int main()
{
    int arr[]{2,3,4,8};
   int N=4;
  cout<<"Mean :"<<mean(arr,N)<<endl;
  cout<<"Median :"<<median(arr,N)<<endl;


    // for(iNt i=0;i<3;i++)
    // {
    //     cout<<a[i]<<eNdl;
    // }
}