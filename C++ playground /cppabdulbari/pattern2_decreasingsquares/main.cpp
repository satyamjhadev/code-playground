//
//  main.cpp
//  pattern2_decreasingsquares
//
//  Created by satyam kumar jha on 08/01/22.
// to print: decresing square pattern:
//

#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    
    for(i=1;i<=n;i++){
        
        for(j=1;j<=n-i+1;j++)
        {
            cout<<"*";
            
        }
        cout<<"\n";
    }
    return 0;
}