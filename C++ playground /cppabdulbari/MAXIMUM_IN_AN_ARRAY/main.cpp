//
//  main.cpp
//  MAXIMUM_IN_AN_ARRAY
//
//  Created by satyam kumar jha on 23/02/22.
//

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int A[8]={2,3,4,56,78,12,34,60};
    int max=INT_MIN;
    
    for(auto x:A){
        if(x>max){
            max=x;
        }
    }
    
    cout<<"MAXIMUM_NO_IN_AN_ARRAY_IS "<<max<<endl;
    
    return 0;
}
