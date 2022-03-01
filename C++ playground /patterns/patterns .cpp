#include <iostream>
using namespace std;

int main(){
    int *p; // declation of the adress variable.
    int x=10; // declaration and intialisation of the variable x where our pointer p adress variable is refring to.

    p=&x; // intialisation of adress variable.

    cout<<p;

    return 0;



}