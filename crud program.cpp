//CRUD OPERATION USING ARRAY AND FUNCTION
#include<iostream>
using namespace std;
int i=0;
void add(int a[])
{
	cout<<"enter the number that you want to add"<<endl;
	cin>>a[i];
	i++;
	cout<<"Added Succesfully"<<endl;
}
void exit(int a[])
{
}
void search(int a[])
{
	int n;
	cout<<"enter the number which you want to search"<<endl;
	cin>>n;
	for (int j=0;j<i;j++)
{	if(n==a[j])
	{
	cout<<"your search value is "<<a[j]<<endl;
	}

}
	
		cout<<"your value is not match"<<endl;
	
}
void update(int a[])
{
	
	
	int n;
	cout<<"enter the number which you want to update"<<endl;
	cin>>n;
	for (int j=0;j<i;j++) 
{
		if(n==a[j])
	{	
	cout<<"your new value is "<<a[j]<<endl;
	cin>>a[j];
		
	}
  }
}

void del(int a[])
{
	int n;
	cout<<"enter the number which you want to delete"<<endl;
	cin>>n;
		for(int j=0;j<i;j++)
		{
			if (n==a[j])
			{
				for(int z=j;z<i;z++)
				{
					a[z]=a[z+1];
				}
			}
		i--;
		break;}
		
}
void show(int a[])
{
	for (int j=0;j<i;j++)
	{
		cout<<a[j]<<endl;
	}
}
int main()
{
	
	
	cout<<"Press 1 for Add"<<endl;
	cout<<"Press 2 for search"<<endl;
	cout<<"Press 3 for delete"<<endl;
	cout<<"Press 4 for update"<<endl;
	cout<<"Press 5 for show"<<endl;
	cout<<"Press 6 for exit"<<endl;
	
	p:
	int choice;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	int a[20];
	switch(choice)
	{
		case 1:
	    	add(a);
	    break;
		case 2:
        	search(a);
	    	break;
		case 3:
			del(a);
			break;
		case 4:
			update(a);
			break;
		case 5:
			show(a);
			break;
		case 6:
		    exit(0);
			break;
		default:
			cout<<"invalid input"<<endl;

	}
goto p;

	return 0;
}