//
//  main.cpp
//  pattern1
//
//  Created by satyam kumar jha on 08/01/22.
// printing square pattern

#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++){
            cout<<"*";
            
        }
        cout<<endl;
            
    }
    
    
    return 0;
    
}
