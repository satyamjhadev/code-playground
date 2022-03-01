#include <iostream>
using namespace std;

int main(){
	int x=10;
	int &y=x;

	x++;
	cout<<x<<endl;
	y++;
	cout<<y<<" "<<x<<endl;
	
	cout <<&x<<endl;
	cout<<&y<<endl;



return 0;

}