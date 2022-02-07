// simple calculation
int main()
{
  int a,b;
  char input;
  cin >> input;
  cin >>a>>b;
  if (input=='+')
  cout<<"sum of" <<a<< "and" <<b<<"=" <<<a+b<<endl;
else if (input=='-')
cout<<"diff of " <<a<< "and" <<b<<"=" <<a-b<<endl;

else if(input=='*')
cout<<"multiply of "<<a<< "and" <<b<<"=" <<a*b<<endl;

else if (input=='/')
cout<<"modulus of"<<a<< "and" <<b<<"=" <<a/b<<endl;

else if (input=='%')
cout<<"division of "<<a<< "and" <<b<<"=" <<a%b<<endl;

return 0
}