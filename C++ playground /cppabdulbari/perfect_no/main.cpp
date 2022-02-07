//
//  main.cpp
//  perfect_no
//
//  Created by satyam kumar jha on 10/01/22.
//

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter no to check"<<"\n";
    int n,sum=0;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;}
    
    }
    
    if(sum==n*2)
        cout<<"Perfect no"<<'\n';
    else
        cout<<"Not a perfect no"<<'\n';
    
    return 0;
    
}
