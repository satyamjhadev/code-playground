#include <iostream>
using namespace std;

int main() {
    int t,n,flag=1,i=2;
    cin>>t;
    while (t!=0)
    {
        cin>>n;
        while (i<=n/2) // 2nd while loop
        {
            if (n%i==0)
            {
                flag=0;
                break; // this break takes me out of the second while loop.
            }
            i++;

            if (flag=1)
            {
                cout<<n<<"is  a prime no"<<endl;

            }
            else
            cout<<n<<"is not a prime no"<<endl;
            t--;
            flag=1; // when we take 1 even and one odd we need to make flag=1 evertime we end the loop.
            

            
        }
        return 0;
        
    }