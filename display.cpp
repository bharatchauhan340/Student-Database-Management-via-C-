#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;
int main()
{
	student S;
	fstream F;
	
	F.open("student.db",ios::in|ios::binary);
	if(F==NULL)
	  {cout<<" File dosen't Exist... "<<endl;
	  }
	else
	  {while( !F.eof() )
	    {
	    	F.read((char*)&S,sizeof(S));
	    	if( F.eof() ) break;
	    	S.putstudent();
		}
	  }
	  F.close();

   	
}
