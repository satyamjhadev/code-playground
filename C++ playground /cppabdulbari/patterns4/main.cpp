//
//  main.cpp
//  patterns4
//
//  Created by satyam kumar jha on 28/02/22.
//

#include <iostream>
using namespace std;

int main(){
    int count=1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<count<<" ";
            count++;
            
        }
        cout<<endl;
    }
    return 0;
}
