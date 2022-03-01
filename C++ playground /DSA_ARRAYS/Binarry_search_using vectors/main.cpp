//
//  main.cpp
//  Binarry_search_using vectors
//
//  Created by satyam kumar jha on 24/02/22.
//
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int f(vector<int> v,int n,int key)
{
    //implement binary_search
    auto it=lower_bound(v.begin(),v.end(),key);
    
    if(it==v.end() || *it!=key)
    {
        return -1;
        
    }
    else{
        int index=distance(v.index(),it);
        return index;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        

       // int *a=new int[n];
         //declartion of the arrays when constrainst is greater than 10
        
        vector<int> v1; //dynamic declartion of athe arrays using vector
        

        for(int i=0;i<n;i++){
            cin>>a;
        v1.push_back(a);
        
        }
        
        int key;
        cin>>key;
        
        int index=f(v1,n,key);
        
        if(index!=-1)
            cout<<key<<"is present at index"<<index<<endl;
        else
            cout<<key<<"is not found!"<<endl;
    }
    
    return 0;
}
