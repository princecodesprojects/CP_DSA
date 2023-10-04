#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
   int a[]={10,20,20,30,30,30};
   int n=6;
   int res=1;
   for(int i=1;i<n;i++)
   {
      if(a[i]!=a[res-1])
      {
         a[res]=a[i];
         res++;
      }
   }

   cout<<"SIze = "<<res<<endl;

   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }


   //Solution 1
   // int temp[n];
   // temp[0]=a[0];
   // int res=1;
   // for(int i=1;i<n;i++)
   // {
   //    if(a[i]!=temp[res-1])
   //    {
   //       temp[res]=a[i];
   //       res++;
   //    }
   // }

   // for(int i=0;i<res;i++)
   // {
   //    a[i]=temp[i];
   // }

   // cout<<"SIze = "<<res<<endl;

   // for(int i=0;i<n;i++)
   // {
   //    cout<<a[i]<<" ";
   // }
    return 0;
}