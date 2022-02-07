//
//  main.cpp
//  palimdrone no
//
//  Created by satyam kumar jha on 06/02/22.
//

#include <iostream>
using namespace std;


int main() {
    int t,n,r,rev=0,m;
    cin>>t;
    while(t--){
        cout<<"Enter no to check"<<"\n";
        cin>>n;
        m=n;
        while(n>0){
            r=n%10;
            n=n/10;
            rev=rev*10+r;
            
        }
        if(m==rev){
            cout<<m<<" is a palimdrome no"<<endl;
        }
        else
            cout<<"is not a palimdrome no"<<endl;
            
        
        rev=0; // to make r=0 again for the next test case.
    }
    return 0;
}
