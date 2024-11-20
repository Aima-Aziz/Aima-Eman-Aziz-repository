#include<iostream>
using namespace std;
//funtion definition
void passbyvalue(int num)
{
	num=num+10;
	cout<<"inside function(pass by value): "<<num<<endl;
	
}
int main(){
	int n=5;
	cout<<"before function call "<<n<<endl;
	passbyvalue(n);
	cout<<"after function call "<<n<<endl;
	
	return 0;
	
}