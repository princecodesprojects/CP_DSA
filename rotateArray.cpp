#include<iostream>
using namespace std;
#include<string>

class Test
{
   public:
    void rotate(int arr[],int n,int d)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"x "<<(n-1)-d<<endl;
            if(i>=((n-1)-d))
            {
                 cout<<"i 1 :"<<i<<endl;
                int t=arr[i];
                arr[i]=arr[n-1];
                arr[n-1]=t;
            }
            else
            {
                cout<<"i 2 :"<<i<<endl;
                int t=arr[i];
                arr[i]=arr[i+d];
                arr[i+d]=t;
            }
        }
    }
};

int main()
{
  system("cls");
  Test t;
  int arr[]={40, 13, 27, 87, 95, 40, 96 ,71, 35 ,79 ,68 ,2 ,98 ,3 ,18 ,93 ,53 ,57 ,2 ,81 ,87 ,42 ,66 ,90 ,45 ,20 ,41 ,30 ,32 ,18 ,98 ,72 ,82, 76 ,1,0 ,28 ,68 ,57 ,98 ,54 ,87, 66 ,7 ,84 ,20 ,25 ,29 ,72, 33, 30, 4 ,20 ,71, 69, 9 ,16 ,41, 50 ,24 ,19,46, 47 ,52 ,22,56, 80 ,89 ,65, 29, 42, 51, 94, 1 ,35, 65 ,25};
 // t.rotate(arr,5,2);
  cout<<"Result : "<<sizeof(arr)/sizeof(int);
//   for(int i=0;i<5;i++)
//         {
//            cout<<arr[i]<<" ";
//         }

    return 0;
}