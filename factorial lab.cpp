#	include<iostream>
using namespace std;
int main()
{ 
	int n;
	long factorial=1.0;
	cout<<"enter a positive number"<<endl;
	cin>>n;
	
		if(n<0)
	{
		cout<<"error!factorial of neagtive number doesn't exist"<<endl;
	}
	else{
		for(int i=1; i<=n; i++)
		factorial*=i;
			}
	cout<<"factorial of"<<n<<"="<<factorial;

return 0;	
}		