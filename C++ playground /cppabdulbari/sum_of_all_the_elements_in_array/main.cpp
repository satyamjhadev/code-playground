//
//  main.cpp
//  sum_of_all_the_elements_in_array
//
//  Created by satyam kumar jha on 23/02/22.
//

#include <iostream>
using namespace std;

int main(){
    
    int sum=0;
    int A[7]={1,2,3,4,5,6,7};
    
    for(int x:A)
    {
        sum=sum+x;
        
    }
    cout<<sum<<endl;
    
    
    
    return 0;
}
