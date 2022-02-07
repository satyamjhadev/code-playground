//
//  main.cpp
//  displaying_zigzag_way
//
//  Created by satyam kumar jha on 23/12/21.
//

#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    int i,j;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
            
        }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        
            if(i%2==0)
            {
                cout<<a[i][j];
            }
            else
                cout<<a[i][c-j-1];
        }
    }
}
