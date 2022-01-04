#include <iostream>
using namespace std;

int main() {
    int n,temp;
    
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        rn=rn*10+r;
        n=n/10;

    }

    if (n==r)
    cout <<n<<"is a palimdrone no";
    else
    cout<<n<<"is a palimdrone no"
    cout<<rn<<endl;
    return 0;

}