//
//  main.cpp
//  Factors_of_the_nos
//
//  Created by satyam kumar jha on 09/01/22.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<endl;
    }
    return 0;
    
}
