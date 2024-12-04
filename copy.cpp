#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	
	char source[]="hello,world!";
	char destination[50];//make sure the destination array
	
	//use strcpy() to copy the source string into destination
	strcpy(destination ,source);
	//destination k andar source k value copy krein
	
	//print the copied string
	cout<<"source string:"<<source<<endl;
	cout<<"destination string:"<<destination<<endl;
	
	return 0;
}
	