//
//  main.cpp
//  amstrong no
//
//  Created by satyam kumar jha on 06/02/22.
//

/*#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t,n,r,m,sum=0;
    cin>>t;
    while(t--){
        cout<<"enter no to check"<<endl;
        cin>>n;
        m=n;
       while(n>0)
        {
            r=n%10;
            n=n/10;
            sum=sum+r*r*r;
        }
            if(sum==m)
                cout<<" is amstrong no"<<endl;
                
            
            else
                cout<<"is not an amstrong no"<<endl;
    }
    cout<<endl;
    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    int t,n,r,m,sum=0;
    cin>>t;
    while(t--){
        cout<<"enter no to check"<<endl;
        cin>>n;
        m=n;
       while(n>0)
        {
            r=n%10;
            n=n/10;
            sum=sum+r*r*r;
        }
            if(sum==m)
                cout<<" is amstrong no"<<endl;
                
            
            else
                cout<<"is not an amstrong no"<<endl;
    }
    cout<<endl;
    return 0;
}
