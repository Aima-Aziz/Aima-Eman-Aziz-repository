#include<iostream>
using namespace std;
void sum(int a,int b)
{
int s=a+b;
	cout<<"sum of two number = "<<s<<endl;
}
void sub(int x,int y)
{
	int minus=x-y;
	cout<<"subtraction of two numbers ="<<minus<<endl;
}
void multi(int c,int d){
	int mul=c*d;
	cout<<"multiplication of two number ="<<mul<<endl;
}

int main()
{ int a;
int b;

cout<<"enter the two numbers ="<<endl;
cin>>a>>b;
	
	sum(a,b);
	sub(a,b);
	multi(a,b);
	
	
	return 0;
}