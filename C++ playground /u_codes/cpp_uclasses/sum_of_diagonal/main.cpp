//
//  main.cpp
//  sum_of_diagonal
//
//  Created by satyam kumar jha on 23/12/21.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[i][j];
    int i,j,sum=0;
    
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
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        if(i+j==n-1)
        {
            sum=sum+a[i][j];
        }
        
    }
    cout<<sum<<endl;
    return 0;
}
