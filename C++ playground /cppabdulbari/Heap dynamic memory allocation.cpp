#include <iostream>
using namespace std;

int main(){
	int *p=new int[5];
	p[0]=0;
	p[1]=40;
	p[2]=30;
	p[3]=20;
	p[4]=10;

	cout<<p[1]<<endl;
	cout<<p[2]<<endl;
	cout<<p[3]<<endl;
	cout<<p[4]<<endl;
	cout<<p[5]<<endl;
	cout<<p[6]<<endl;
	cout<<p[6]<<endl;
	cout<<p[7]<<endl; // out of bound we have garbage value.
	
	
	// p=nullptr;  do not make it a  null ptr before deallocation of the haep memory.
	
	cout<<"after deallocation"<<endl;

	delete []p;
	cout<<p[2]<<endl;
	cout<<p[4]<<endl;
	cout<<p[1]<<endl;
	cout<<p[4]<<endl;
	cout<<p[4]<<endl;
	cout<<p[1]<<endl;
	cout<<p[4]<<endl;
	p=nullptr;
    cout<<"after using nullptr"<<endl;
	cout<<p[4]<<endl; // after using nullptr we are not getting any values.
	cout<<p[1]<<endl; 
}
