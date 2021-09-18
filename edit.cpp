#include<iostream>
#include<fstream>
#include"student.h"
#include<stdlib.h>
using namespace std;

int main()
{
	student S;
	fstream F,T;
	int rollno,found,count;
	F.open("student.db",ios::in|ios::binary);
	T.open("temp.db",ios::out|ios::binary);
	if(F==NULL)
	{cout<<" File not Found "<<endl;
	}
	else
	{
		cout<<"Enter Roll No of which data to be edited ";
		cin>>rollno;
		
		while(!F.eof())
		{
			F.read((char*)&S,sizeof(S));
			if(F.eof()) break;
			found=S.search(rollno);
			if(found)
			{S.editstudent();
			 count++;
			}
			T.write((char*)&S,sizeof(S));
		}
		 if(count==0)
           {cout<<"Record Not Found...";}

	}
	
	F.close();
	T.close();
	remove("student.db");
	rename("temp.db","student.db");
	
	return 0;
}
