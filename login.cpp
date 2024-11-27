/*
•	The User structure has a member variable name to store the username. 
•	The program prompts the user to enter their username, simulates a login process 
(you should replace this with actual authentication logic), and then displays a personalized welcome message upon successful login.
*/
#include<iostream>
using namespace std;

struct user{
	
string username;
int password;
	
	};
	int main()
	{
		user u1;
		string user="admin";
	const int pass=12345;
		cout<<"enter the username: "<<endl;
		cin>>(u1.username);
		cout<<"enter the password: "<<endl;
		cin>>u1.password;
		
		if (user==(u1.username) && pass==(u1.password))
		{
			cout<<"************************"<<endl;
			cout<<"**** WELCOME "<<u1.username<<"! ****"<<endl;
			cout<<"************************"<<endl;
			cout<<"you are successfully login"<<endl;
				
		}else
		{
			cout<<"incoorect username and password"<<endl;
			cout<<"login failed!"<<endl;
		}
		
	
		
		
		return 0;
	}