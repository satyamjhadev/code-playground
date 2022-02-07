//
//  main.cpp
//  multiplication_tables
//
//  Created by satyam kumar jha on 05/01/22.
//
// multiplication table



//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin>>n;
//
//    for(int i=1;i<=10;i++){
//        cout<<n<<"*"<<i<<"="<<n*i<<endl;
//    }
//    return 0;
//
//}


#include <iostream>
using namespace std;

int main() {
    int n,t;
    cin>>n>>t;
    
    for(int i=2;i<t;i=i+2)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
    
}
