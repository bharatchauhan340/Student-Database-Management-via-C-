#include<iostream>
#include<fstream>
using namespace std;
class student
{
	private:
		int rollno;
		char name[30];
		int p,c,m;
	public:
		void getstudent()
		{
			cout<<endl<<" Enter Roll no : ";
			cin>>rollno;
			cin.ignore();
			cout<<" Enter Name : ";
			cin.getline(name,30);
			cout<<" Enter marks of PHYSICS CHEMISTRY & MATHEMATICS : ";
			cin>>p>>c>>m;
		}
		void getresult()
		{
			int t=p+c+m;
			float per=t/3;
			cout<<" Total Marks : "<<t<<" , Percentage : "<<per;
			if(per>=60)
			 cout<<" First Devision "<<endl;
			else if(per<60&&per>=45)
			 cout<<" Second Devision "<<endl;
			else if(per<45&&per>=33)
			 cout<<" Third Devision "<<endl;
			else
			 cout<<" Fail "<<endl;
		}
		void putstudent()
		{
			cout<<endl<<" Roll No. "<<rollno<<" , "<<" Name "<<name<<endl<<" Physics Marks "<<p<<" , "<<" Chemistry marks "<<c<<" , "<<" Mathematics Marks "<<m<<endl;
			getresult();
			
		}
        int search(int);
		void editstudent()
		{ int ch;
		  cout<<endl<<"what you want to edit" <<endl<<"1] Name "<<"  2] Physics marks "<<"  3] Chemistry marks "<<"  4] Mathematics marks "<<endl;
		  cin>>ch;
		  switch(ch)
		   {
		   	  case 1:
		   	  	cout<<" Enter new Name : ";
		   	  	cin>>name;
		   	  	break;
		   	  case 2:
		   	  	cout<<" Enter new Physics Marks : ";
		   	  	cin>>p;
		   	  	break;
		   	  case 3:
		   	  	cout<<" Enter new Chemistry Marks : ";
		   	  	cin>>c;
		   	  	break;
			  case 4:
		   	  	cout<<" Enter new Mathematics Marks : ";
		   	  	cin>>m;
		   	  	break;	
			  default:
			   cout<<" Invalid Choice ";
			   break;	  	
		   	  	
		   }
		}
		void deletestudent()
		{
		   cout<<endl<<" Data deleted Successfully..."<<endl;	
		}		
		
};
 int student::search(int rollno)
 { if(this->rollno==rollno)
   {putstudent();
    return(1);
   }
    return(0);
 }




















