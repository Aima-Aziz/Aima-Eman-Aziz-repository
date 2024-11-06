#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"entr the rows"<<endl;
cin>>rows;

for(int i=1;i<rows;i++)
{
	for(int j=1;j<rows-i;j++)
	{
		cout<<" ";
	}
	for(int z=1;z<i+i;z++)
	{
		cout<<"*";
	}
	cout<<"\n";
	}
		
return 0;	
}