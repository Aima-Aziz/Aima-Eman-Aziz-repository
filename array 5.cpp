#include<iostream>
using namespace std;
int main()
{
	
	int arr[5]={2,3,5,6,7};
	cout<<"enter the elements"<<endl;
	int sum=0;
	int sub=0;
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
		sum=sum+arr[i];
	sub=sum-arr[4];
	}
	cout<<endl;
		cout<<"sum = "<<sum;
		cout<<endl;
	cout<<"subtraction ="<<sub;
	return 0;
}