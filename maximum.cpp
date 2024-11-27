#include <iostream>
using namespace std;
struct StudentGrading {
    string name;
   int sapID;
    string address;
    string department;
    float marksSubject1;
    float marksSubject2;
    float maxMarks; 
};
//function decalaration
void calculateMaxMarks(StudentGrading& student); 
void displayStudent(const StudentGrading& student);
int main() {
    StudentGrading student[5];
    //input student information
    for (int i = 0; i < 5; i++) {
    cout<<"Enter the details of student "<<i+1<<endl;
    cout<<"--------------------------"<<endl;
	cout<<"Enter the name:"<<endl;
	cin>>student[i].name;
	cout<<"Enter the sap id:"<<endl;
	cin>>student[i].sapID;
	cout<<"Enter the address:"<<endl;
	cin>>student[i].address;
	cout<<"Enter the department:"<<endl;
	cin>>student[i].department;
	cout<<"Enter the marks for subject 1:"<<endl;
	cin>>student[i].marksSubject1;
	cout<<"Enter the marks for subject 2:"<<endl;
	cin>>student[i].marksSubject2;
	//clear the input buffer
	cin.ignore();
    }
cout<<"--------------------"<<endl;
    
    for (int i = 0; i < 5; i++) {
    	//function call
        calculateMaxMarks(student[i]); 
        displayStudent(student[i]);   
    }

    return 0;
}
//function definition
void calculateMaxMarks(StudentGrading& student)
 {
    student.maxMarks = max(student.marksSubject1, student.marksSubject2);
}
void displayStudent(const StudentGrading& student)
{//display student information
for(int i=0;i<5;i++)
{

    cout << "DETAILS OF STUDENT "<<i+1<<endl;
    cout<<"----------------------"<<endl;
    cout << "Name " << student.name << endl;
    cout << "SAP ID " << student.sapID << endl;
    cout << "Address " << student.address << endl;
    cout << "Department " << student.department << endl;
    cout << "Marks in Subject 1 " << student.marksSubject1 << endl;
    cout << "Marks in Subject 2 " << student.marksSubject2 << endl;
    cout << "Maximum Marks " << student.maxMarks << endl;
    cout<<"-------------------"<<endl;
}
}