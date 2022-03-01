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
        

      
        
        vector<int> v1; 
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
