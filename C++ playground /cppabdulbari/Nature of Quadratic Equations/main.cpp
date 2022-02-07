//
//  main.cpp
//  Nature of Quadratic Equations
//
//  Created by satyam kumar jha on 23/01/22.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c,d,r1,r2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    r1=(-b+sqrt(b*b-4*a*c)/2*a);
        r2=(-b-sqrt(b*b-4*a*c)/2*a);
    
    if(d==0){
        cout<<"roots are real and equal"<<endl;
        cout<<"and roots are "<<-b/2*a<<"\n";}
    
    else if(d>0){
        cout<<"roots are real and unequal";
    cout<<endl<<r1<<r2<<"\n";
    }
    
    else
        cout<<"roots are imaginary"<<"\n";
    return 0;
}

