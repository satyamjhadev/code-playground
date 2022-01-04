//
//  main.cpp
//  valid_roll_no
//
//  Created by satyam kumar jha on 29/12/21.
//

#include <iostream>
using namespace std;

int main() {
    int roll;
    cout<<"enter your roll no";
    cin>>roll;
    
    if(roll<1)
        cout<<"Invalid Roll No"<<endl;
    else
        cout<<"valid roll no"<<endl;
    
    
    return 0;

}

   
