/*Armstrong no is the no when upon sum 
of cubes of the digit is equal to the no itself
so we need digits to take sum of theirs cubes.
we know how to get all the digit 
to get the last no we will just divide the no by 10 and the 
remainder will be last digit and then we will 
divide the no by 10 angain do the process. */

#include <iostream>
using namespace std;

int main(){
	int N,tc,sumofdig=0,r;
	cin>>tc;
	while(tc--){
		cin>>N;
	
	if(N>0){
		r=N%10;
		r=N/10;
		sumofdig=sumofdig+r*r*r;

	
	
	if(sumofdig=N){
		cout<<"N is amstrong no"<<"\n";
	

	}
	else{
		cout<<"no is not a amstrong no,try again"<<"\n";
	}


}

}

}