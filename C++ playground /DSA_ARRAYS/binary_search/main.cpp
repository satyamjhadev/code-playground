//
//  main.cpp
//  binary_search
//
//  Created by satyam kumar jha on 24/02/22.
//

// BInary search using vectors::

#include "bits/stdc++.h"
#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int arr[],int n,int key)
int s=0;
int e=n-1;
while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
        
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
        
    }
    else{
        s=mid+1;
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int *a=new int[n];

       
        

        for(int i=0;i<n;i++)
            cin>>a[i];
        
        
    
        
        int x;
        cin>>x;
        
        int index=binary_search(a,n,x);
        
        if(index!=-1)
            cout<<x<<"is present at index"<<index<<endl;
        else
            cout<<x<<"is not found!"<<endl;
    }
    
    return 0;
}
