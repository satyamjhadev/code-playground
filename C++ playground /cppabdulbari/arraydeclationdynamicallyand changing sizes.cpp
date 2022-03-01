#include <iostream>
using namespace std;


int main(){
	int *p=new int[50];
	// p[i] // we can run i here from 0 to 49.
	// so we have size of the array is equal to 50 in heap.
	cout<<sizeof(p)<<endl;

	// so we can change the dynamic size of the array but
	// before doing that we need to delete the previous array.

	delete []p; // if we do not deallocate the memory using delete. 
	// it will result in memory leak

	cout<<"After changing the size of the array"<<endl;

	p=new int[100];
	// Note that:: we have new array with the same name p.
	// p[i]  we can take i from 0 to 99.
	// now we have size of the array=100.
	cout<<p[0]<<endl;
	cout<<p[1]<<endl;
	cout<<p[2]<<endl;

	return 0;



}