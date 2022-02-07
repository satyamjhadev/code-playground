//
//  main.cpp
//  reverse_of_a_no
//
//  Created by satyam kumar jha on 06/02/22.
//

#include <iostream>
using namespace std;


int main() {
   long long int t,n,r,rev=0;
    cin>>t;
    while(t--){
        cout<<"Enter no to get it's reverse"<<endl;
        cin>>n;
        while(n>0){
            r=n%10;
            n=n/10;
            rev=rev*10+r;
        }
        cout<<rev<<endl;
    }
  
    
    return 0;
}
