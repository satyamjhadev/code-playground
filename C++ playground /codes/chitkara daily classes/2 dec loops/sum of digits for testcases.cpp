
// calculating the sum of digits.

#include <iostream>
using namespace std;

int main() {
    int t,n,sum=0;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        while(n!=0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
        sum=0; // for finding the new sum we assign the calculated sum to be 0!

        t--; // for the test cases to be reduced for the next one.
    }
    return 0;




}