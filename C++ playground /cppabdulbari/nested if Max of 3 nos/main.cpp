//
//  main.cpp
//  nested if Max of 3 nos
//
//  Created by satyam kumar jha on 23/01/22.
//

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"ENter 3 no"<<"\n";
    cin>>a>>b>>c;
    
    if(a>b && a>c)
        cout<<a<<"is greater"<<endl;
    else if(b>c)
        cout<<b<<"is greater"<<endl;
    else
        cout<<c<<"  is greater"<<endl;
    return 0;
    
}

