#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
     {
        for(int j=1;j<=7;j++)
         {
            int x=1;
            if(j>=5-i && j<=3+i)
             {
                if(x)
                 {
                    cout<<" * ";
                    x=1-x;
                 }
                 else 
                  {
                    cout<<"   ";
                  }
                
             }
             else
              {
                cout<<"   ";
              }
         }
         cout<<endl;
     }
}