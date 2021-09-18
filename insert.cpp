#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;
int main()
{
	student S;
	fstream F;
	char ch;
	
	F.open("student.db",ios::out|ios::app|ios::binary);
	do
	{
		S.getstudent();  
		F.write((char*)&S,sizeof(S));
		
		cout<<" Add More Records (y/n) : ";
		cin>>ch;
	}while(ch=='y');
	F.close();
	
	return 0;
}
