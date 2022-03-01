//
//  main.cpp
//  MINIMUM_IN_AN_ARRAY
//
//  Created by satyam kumar jha on 23/02/22.
//

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int A[11]={1,2,3,4,5,6,7,8,98,0,-2};
    int min=INT_MAX;
    
    for(int x:A)
    {
        if(x<min)
            min=x;
    }
    cout<<"MINIMUM_NO_IN_AN_ARRAYS "<<min<<endl;
    return 0;
}
