#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter the rows"<<endl;
	cin>>rows;
	int col;
	cout<<"enter the column"<<endl;
	cin>>col;
	int sum=0;
	float  avg=0.0;
	//input elemnt
	
	int arr[rows][col];
	cout<<"enter the elements of arrays: "<<endl;
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"element["<<i<<"]["<<j<<"]:";
			cin>>arr[i][j];
			sum=sum+arr[i][j];
			avg=sum/arr[i][j];
		}
	}
	//display the 2D array
	cout<<"\nThe 2D array is :"<<endl;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
	
	}
	cout<<"sum "<<sum;
	cout<<endl;
	cout<<"avg "<<avg;
	
	return 0;
}
