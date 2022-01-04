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
    for(i=0;i<c;i++)
    {
        max=a[0][i];
        for(j=0;j<r;j++)
        {
           
            if(a[j][i]>max)
                max=a[j][i];
            
        }
        cout<<max<<endl;
    }
    return 0;
}
