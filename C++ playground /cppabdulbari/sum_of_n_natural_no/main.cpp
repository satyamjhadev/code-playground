//
//  main.cpp
//  sum_of_n_natural_no
//
//  Created by satyam kumar jha on 05/01/22.
//

#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"Enter no"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
//        sum+i;
        sum=sum+i;
        cout<<sum<<"+"<<i<<"="<<sum<<endl;
    }
    return 0;
    
}
