#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);

    for(int i=0;i<v.size();i++)
     v[i]--;

     for(int i=0;i<v.size();i++)
     v[v[i]%5]=v[v[i]%5]+5;

     for(int i=0;i<v.size();i++)
       cout<<v[i]<<" ";


  for(int i=0;i<v.size();i++)
  v[i]=v[i]/5;


}