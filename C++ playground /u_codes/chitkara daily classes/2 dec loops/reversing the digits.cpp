#include <iostream>
using namespace std;

int main() {
    int t,n,rev=0;
    cin>>t;
    while (t!=0)
    {
        cin>>n;
        while (n!=0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        cout<<rev<<endl;
        rev=0;
        t--;
        
    }
    return 0;
}
// see sum of digits for elaboration.

    
    