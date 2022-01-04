// finding max in a row.
#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    int a[r][c],i,j,max;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][c];
            
        }
    }
    for(i=0;i<r;i++)
    {
        max=a[i][0];
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
            if(a[i][j]>max)
                max=a[i][j];
            
        }
        cout<<max<<endl;
    }
    return 0;
}
