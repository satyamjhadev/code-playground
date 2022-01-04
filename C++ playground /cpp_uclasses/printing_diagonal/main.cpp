//
//  main.cpp
//  printing_diagonal
//
//  Created by satyam kumar jha on 23/12/21.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int i,j;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
                cout<<a[i][j];
            else
                cout<<"  ";
            
        }
        cout<<endl;
        return 0;
    }
    }
