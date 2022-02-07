//
//  main.cpp
//  sum_of_digits_with_testcases
//
//  Created by satyam kumar jha on 09/01/22.
//


#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int N,T,sum=0;
    cin>>T;
    while(T>0){
        for(int i=0;i<T;i++)
        {
            cin>>N;
            
        }
            while(N!=0)
            {
                sum=sum+(N%10);
                N=N/10;
                cout<<sum<<endl;
               
            }
        T--;
            
        
    }
    return 0;
}
