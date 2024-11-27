#include<iostream>
using namespace std;

struct student{
	
	char name[20];
	int rollnumber;
	int age;
	float markssubject1;
	float markssubject2;
	};
	
	int main()
	{ 
		student s1[5];
	
		for(int i = 0;i<5; i++)
		{
			cout<<"enter detail of the student"<<i+1<<endl;
			cout<<"enter student name"<<endl;
			cin.getline(s1[i].name,20);
			cout<<"enter roll number"<<endl;
			cin>>s1[i].rollnumber;
			cout<<"enter age"<<endl;
			cin>>s1[i].age;
			cout<<"enter marks of student for subject 1:"<<endl;
			cin>>s1[i].markssubject1;
			cout<<"enter marks of student for subject 2:"<<endl;
			cin>>s1[i].markssubject2;
				//	clear input buffer
		cin.ignore();
		}

		for(int i=0;i<5;i++)
		{
			cout<<"student information:"<<endl;
			cout<<"student name:"<<s1[i].name<<endl;
			cout<<"roll number:"<<s1[i].rollnumber<<endl;
			cout<<"age:"<<s1[i].age<<endl;
			cout<<" marks for subject 1:"<<s1[i].markssubject1<<endl;
			cout<<" marks for subject 2:"<<s1[i].markssubject2<<endl;
		}
		return 0;
	}