#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
   int a[]={0,0,0,10,0};
   int n=5;
   int c=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]!=0)
       {
          int t=a[i];
          a[i]=a[c];
          a[c]=t;
         c++;
       }
       
   }

   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   return 0;
}