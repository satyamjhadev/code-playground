// printing prime no


#include <iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cin>>n;
    for (i = 2; i < n/2;i++)
    {
        if (n%i==0)

        {
            flag=1;
            break;


        }
        if (flag==1)

        {
            cout<<n<<"is not a prime no";

        }
        if (flag==0)
        {
            cout<<n<<"is a prime no";
        }
        
        

       
    }
    
    return 0;
}
