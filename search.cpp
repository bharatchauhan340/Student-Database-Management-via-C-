#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;
int main()
{ student S;
  fstream F;
  int rollno,found;
  F.open("student.db",ios::in|ios::binary);
  if(F==NULL)
  {cout<<"File Not Found"<<endl;}
  else
  {  cout<<"roll no :";
     cin>>rollno;

	  while(!F.eof())
     {
       F.read((char*)&S,sizeof(S));
       if(F.eof()) break;
       found=S.search(rollno);
       if(found) break;

     }
      if(!found)
      {cout<<"Student Not Found"<<endl;}
    }
     F.close();

  }

