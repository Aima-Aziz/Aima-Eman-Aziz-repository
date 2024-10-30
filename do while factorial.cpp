#	include<iostream>
using namespace std;
int main()
{ 
	int n;
	long factorial=1.0;
	cout<<"enter a positive number"<<endl;
	cin>>n;
	int i=1;
	do
	{
	factorial*=i;

	i++;
	}
	while(i<=n);
	
	cout<<"factorial of"<<n<<"="<<factorial;
return 0;	
}		