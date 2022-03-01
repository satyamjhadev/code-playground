#include<iostream>
using namespace std;

int main(){
    int d1,d2;

    int A[100]={2,4,6,8,10,12};
    int *p=A;
    int *q=&A[2];
    
    // move pointer to next location to print 4
    p++;
    cout<<*p<<endl;
    d1=p-q;
    cout<<d1<<endl;
    d2=q-p;
    
    cout<<d2<<endl;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<*p<<endl; // will print 10
    cout<<*q<<endl; // will print 6
    
    cout<<"Afer decrement of the pointer variable to the previous variable."<<endl;
    
    p--;
    q--;
    cout<<*p<<endl; // will go to previous element and print 8.
    cout<<*q<<endl; // will print 4.
    
    p=p+3;
    q=q+5;
    cout<<*p<<endl;  // will print 0.
    cout<<*q<<endl;  // will print 0.
    
    // calculating distance btw pointers p and q;
    cout <<"printing distance btw p and q"<<endl;
    
    cout<<d1<<endl;
    cout<<d2<<endl;
    return 0;
}
