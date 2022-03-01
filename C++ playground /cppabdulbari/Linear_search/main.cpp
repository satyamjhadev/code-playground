//
//  main.cpp
//  Linear_search
//
//  Created by satyam kumar jha on 23/02/22.
//

#include <iostream>
using namespace std;

int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cin>>key;
    
    for(int i=0;i<10;i++)
    {
        if(key==A[i]){
            cout<<" KEY ELEMENTS FOUND AT "<<i<<endl;
            exit(0);
        }
    }
    cout<<"KEY ELEMENTS NOT FOUND AT "<<endl;
    
    return 0;
}
