// wap to check it is vowel or consonants using switch
#include <iostream>
#include <cctype>
using namespace std;
int main() {
  char letter=0;
  cout<<endl<<"enter a letter";
  cin>>letter;
  
  if(isalpha(letter))
  switch(tolower(letter)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout <<endl<<"you entered a vowel"<< endl;
    break;

    default:

    cout << endl<<"You entered a consonants"<<endl;
  }

  else
  cout <<endl<<"you did not entered a letter"<<endl;

  return 0;
}
