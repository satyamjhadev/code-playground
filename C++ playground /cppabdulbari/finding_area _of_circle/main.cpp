//
//  main.cpp
//  finding_area _of_circle
//
//  Created by satyam kumar jha on 24/12/21.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout<<"Enter radius of circle"<<endl;
    float r,area;
    cin>>r;
    // without using maths fnc 3.1428f*(r*r)
    //area=3.1428f*(r*r);
    //area=22/7*r*r;
    //area=22/7.0*r*r;
    area=(float)22/7.0*r*r;
    //area=M_PI*pow(r,2);
    cout<<area<<endl;
    return 0;
    
}
