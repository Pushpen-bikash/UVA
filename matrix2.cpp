#include<iostream>
using namespace std;

bool check_symmetric(long a[101][101],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=a[n-i-1][n-j-1])
                return false;
        }
    }
    return true;
}

int main()
{
   int test,n;
   long a[101][101];
   char ch;
   cin>>test;
   bool status;
   for(int i=1;i<=test;i++)
   {
       cin>> ch >> ch >> n;
       status=true;
       for(int j=0;j<n;j++)
       {
        for(int k=0;k<n;k++)
        {
          cin>>a[j][k];
          if(a[j][k]<0)
          {
              status=false;
              //break;
          }
        }

       }//end of 2nd for

              if(status && check_symmetric(a,n))
                cout<<"Test #"<<i<<": "<<"Symmetric."<<endl;
              else
                cout<<"Test #"<<i<<": "<<"Non-symmetric."<<endl;

   }//end of first for
    return 0;
}
