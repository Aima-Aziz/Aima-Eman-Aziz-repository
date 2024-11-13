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
	//input elemnt
	
	int arr[rows][col];
	cout<<"enter the elements of arrays: "<<endl;
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"element["<<i<<"]["<<j<<"]:";
			cin>>arr[i][j];
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
	
	
	
	return 0;
}
