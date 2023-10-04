#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int n=6;
    int a[]={16,17,4,3,5,2};
    //cout<<"h "<<endl;
     vector<int> v;
     v.push_back(-1);
        for(int i=0; i<n-2;i++)
        {
            if(a[i]>a[i+1])
            {
               if(v.back()<a[i])
                {
                     v[v.size()-1]=a[i];
                }

            }
        }
        v.length();
        v.push_back(a[n-1]);
        vector<int>::iterator i;
        for(i=v.begin(); i!=v.end();i++)
        {
            cout<<*(i)<<" ";
        }
    return 0;
}