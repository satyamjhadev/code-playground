#include <iostream>
using namespace std;

int main() {
    int n,rn=0,r;
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        rn=rn*10+r;
        n=n/10;

    }
    cout<<rn<<endl;
}