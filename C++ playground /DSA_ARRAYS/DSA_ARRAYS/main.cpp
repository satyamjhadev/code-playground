//
//  main.cpp
//  DSA_ARRAYS
//
//  Created by satyam kumar jha on 24/02/22.
//

#include <iostream>

using namespace std;

int f(int *a,int n,int x)
{
    for(int i=0;i<n;i++)
    
        if(a[i]==x)
        
            
            return i;

        
        
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

            int *a=new int[n];
             //declartion of the arrays when constrainst is greater than

            for(int i=0;i<n;i++)
                cin>>a[i];

            int x;
            cin>>x;


            f(a,n,x);
            delete [] a;

        }
    }
