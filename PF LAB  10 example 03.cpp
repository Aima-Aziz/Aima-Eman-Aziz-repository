#include<iostream>
using namespace std;

//& location/address
//* value
//pointer used for security reason so that our data is not intercepted by any third party
int main()
{
	int a=10;
	cout<<&a<<endl;
	
	
	int *ptr;//pointer
	ptr=&a;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
	
		*ptr=100;//pointer
	ptr=&a;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
}