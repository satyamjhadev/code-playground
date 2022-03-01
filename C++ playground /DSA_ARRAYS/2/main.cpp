//
//  main.cpp
//  2
//
//  Created by satyam kumar jha on 24/02/22.
//



#include "bits/stdc++.h"
#include <iostream>
#include <algorithm>
using namespace std;

int linear_search(vector<int> v1,int n, int key)
{
    vector<int>::iterator it;
    it=find(v1.begin(),v1.end(),key); //finding the key btw start and end of the vector.
    if(it!=v1.end())
        return (it-v1.begin()); // after finding the key we are returning the indexes.
    return -1;
}

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int a;

           // int *a=new int[n];
             //declartion of the arrays when constrainst is greater than 10
            
            vector<int> v1; //dynamic declartion of athe arrays using vector
            

            for(int i=0;i<n;i++){
                cin>>a;
            v1.push_back(a);
            
            }
            
            int key;
            cin>>key;
            
            int index=linear_search(v1,n,key);
            
            if(index!=-1)
                cout<<key<<"is present at index"<<index<<endl;
            else
                cout<<key<<"is not found!"<<endl;
        }
        
        return 0;


            

        
    }


