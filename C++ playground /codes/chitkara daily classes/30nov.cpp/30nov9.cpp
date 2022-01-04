#include <iostream>
using namespace std;
int main() 
{
    int n,i=2,flag=0;
    cin>>n;
    while (i<=n/2) //no nedd to check untill full no we can check on n/2

    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
        if (flag==0)

        {
            cout<<n<<"is a prime no";

        else 
        cout<<n<<"is not a prime no";

        }
    
    
    
return 0;

}