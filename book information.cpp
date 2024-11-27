/*
•	The Book structure includes members for the book's title, author, year of publication, and number of pages.
•	Functions are defined to input information and display information about a book.
•	The main function creates an array of 5 Book structures, inputs information for each book, and then displays the information for each book.
*/


#include<iostream>
using namespace std;

struct book{
	
	char booktitle[20];
	char author[20];
	int membersforbooktitle;
	int yearofpublication;
	int noofpages;
	
	};
	
	int main()
	{ 
	book b1[5];
	//input
		for(int i = 0;i<5; i++)
		{
			cout<<"enter detail of the book: "<<i+1<<endl;
			cout<<"--------------------------"<<endl;
			cout<<"enter book title: "<<endl;
			cin.getline(b1[i].booktitle,20);
			cout<<"enter book author: "<<endl;
			cin.getline(b1[i].author34,20);
			cout<<"enter members for book title: "<<endl;
			cin>>b1[i].membersforbooktitle;
			cout<<"enter year of publication: "<<endl;
			cin>>b1[i].yearofpublication;
			cout<<"enter number of pages: "<<endl;
			cin>>b1[i].noofpages;
				//	clear input buffer
		cin.ignore();
		}
		//display
			for(int i=0;i<5;i++)
		{
			cout<<"book information:"<<endl;
			cout<<"book title:"<<b1[i].booktitle<<endl;
			cout<<"book author:"<<b1[i].author<<endl;
			cout<<"members for book title:"<<b1[i].membersforbooktitle<<endl;
			cout<<" year of publication:"<<b1[i].yearofpublication<<endl;
			cout<<" number of pages:"<<b1[i].noofpages<<endl;
		}
		return 0;
	}
		