#include<iostream>
#include"student.h"
using namespace std;

int main()
{
	int ch;
	do
	{
		cout<<endl<<" Main Menu\n1]Insertion\n2]Display\n3]edit\n4]search student\n5]Delete\n6]Exit"<<endl;
		cout<<" Enter your Choice... ";
		cin>>ch;
		switch(ch) 
		{
			case 1:
				system("insert.exe");
				break;
			case 2:
				system("display.exe");
				break;
			case 3:
				system("edit.exe");
				break;
			case 4:
				system("search.exe");
				break;
			case 5:
				system("delete.exe");
				break;	
			case 6:
				break;
			default :
				cout<<" Invalid Choice Selection ";
				break;
		}
		
	}while(ch!=6);
	
	return 0;
}
