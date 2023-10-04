#include<iostream>
using namespace std;
#include<string>

class Test
{
   public:
   int betBalance(string result){
       int l=result.length();
       int sum=4,b=1;
       for(int i=0;i<l;i++)
       {
          if(sum>0)
          {
             if(result[i]=='W')
              {
                sum=sum+b;
                b=1;
                cout<<"i : "<<i<<" sum : "<<sum<<endl;
              }
              else
              {
                 sum=sum-b;
                 b=b*2;
                 cout<<"i :"<<i<<" sum : "<<sum<<endl;
              }
          }
          else
          {
             return -1;
          }
       }
       return sum;
   }
};

int main()
{
  system("cls");
  Test t;
  int r=t.betBalance("WLWLLWLLWWLWWW");
  cout<<"Result : "<<r;

    return 0;
}