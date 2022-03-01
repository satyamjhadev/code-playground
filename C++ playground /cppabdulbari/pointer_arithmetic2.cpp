#include <iostream>
using namespace std;

int main(){

	int A[5]={1,2,3,4,5};
	int *p=A;
	int *q=&A[4];

	cout<<&A<<endl;
	cout<<p<<endl;
	cout<<p+2<<endl;
	cout<<&A[2]<<endl;
	cout<<addressof(A[2]);
	cout<<endl;

	cout<<"using for loop to print the arrays element"<<endl;
    

    cout<<"printing address of p before loop"<<p<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<A[i]<<endl;
		p++;
	}
	cout<<"printing address of p after executing for loop"<<p<<endl;

	for(int i=0;i<5;i++){
		cout<<i[A]<<endl;
	}
	cout<<"using (A+i)"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<(A+i)<<endl; // will print the address of the each elements in the array.
		cout<<*(A+i)<<endl; // will print the values of the array
	}
	for(int i=0;i<5;i++)
	{
		cout<<(p+i)<<endl; // we can also use p instead of A bcz p is pointer pointing to the array A. 
		cout<<*(p+i)<<endl; // 
	}

	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	
	cout<<q-p<<endl; // prints -1.
	// means second pointer  q is  far away from p with 1 elements.
	cout<<p-q<<endl; // prints 1.
	// means first pointer is far away from second pointer with 1 element.

	





	return 0;

}
