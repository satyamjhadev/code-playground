//
//  main.cpp
//  roots_of_quardatic_equation
//
//  Created by satyam kumar jha on 24/12/21.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
cout<<"Enter a,b,c(coficients)"<<endl;

float a,b,c,r1,r2;
cin>>a>>b>>c;

r1=(((-b)+sqrt(b*b-4*a*c))/2*a);
r2=(((-b)-sqrt(b*b-4*a*c))/2*a);
cout<<"Roots of quadratic equation "<<r1<<" and "<<r2<<endl;
return 0;
}


