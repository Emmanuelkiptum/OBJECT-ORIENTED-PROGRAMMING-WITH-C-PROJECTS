#include <iostream>
#include <fstream>
#include <conio.h>	
#include <string.h>
using namespace std;
class library 
{
	protected:
	string sch_name,course_name,book_name,author_name;
	int book_no,shelf_no,j;
	public:
	void set();
	void display();

};
void library::set()
{
 cout<<"Enter the name of the institution:"<<endl;
 cin>>sch_name;
 cout<<"Enter the name of the faculty:"<<endl;
 cin>>course_name;
 cout<<"Enter the number of books in the institution:"<<endl;
 cin>>j;
 for(int i=0;i<j;i++)
 {
cout<<"Enter the name of the book:"<<endl;
 cin>>book_name;
 cout<<"Enter the code number of the book:"<<endl;
 cin>>book_no;
 cout<<"Enter the name of the author:"<<endl;
 cin>>author_name;
} 
}
void library::display()
{
 cout<<"********LIBRARY DETAILS********:"<<sch_name<<endl;	
 cout<<"The name of the institution is:"<<sch_name<<endl;
 cout<<"The name of the faculty is:"<<course_name<<endl;
 cout<<"The number of books in the institution is:"<<j<<endl;
 for(int i=0;i<j;i++)
 {
 cout<<"The name of the book is:"<<book_name<<endl;
 cout<<"The code number of the book is:"<<book_no<<endl;
 cout<<"The author name is:"<<author_name<<endl;
}

 cout<<"********SHELF DETAILS********:"<<endl;	
 cout<<"\n1.COMPUTER SCIENCE:"<<endl;
 cout<<"\n2.ACTURIAL SCIENCE:"<<endl;
 cout<<"\n3.MEDICINE:"<<endl;
 cout<<"\n4.NURSING:"<<endl;
 cout<<"\n5.EDUCATION:"<<endl;
 cout<<"\n6.BUSINESS MANAGEMENT:"<<endl;
 cout<<"\n7.CIVIL ENGINEERING:"<<endl;
 cout<<"\n8.ELECTRIC & ELECTRONIC ENGINEERING:"<<endl;
 cout<<"\n9.SOFTWARE ENGINEERING:"<<endl;
 cout<<"\n10.ENVIRONMENTAL SCIENCE:"<<endl;
 cout<<"Enter the choice of your course shelf:"<<endl;
 cin>>shelf_no;
 switch(shelf_no)
 {
 	case 1:
 		cout<<"*******COMPUTER SCIENCE SHELF NUMBER*******:"<<endl;
 	break;
 	case 2:
 		cout<<"*******ACTURIAL SCIENCE SHELF NUMBER*******:"<<endl;
 	break;
 	case 3:
 		cout<<"*******MEDICINE SHELF NUMBER*******:"<<endl;
 	break;
 	case 4:
 		cout<<"*******NURSING SHELF NUMBER*******:"<<endl;
 	break;
 	case 5:
 		cout<<"*******EDUCATION SHELF NUMBER*******:"<<endl;
 	break;
 	case 6:
 		cout<<"*******BUSINESS MANAGEMENT SHELF NUMBER*******:"<<endl;
 	break;
 	case 7:
 		cout<<"*******CIVIL ENGINEERING SHELF NUMBER*******:"<<endl;
 	break;
 	case 8:
 		cout<<"*******ELECTRIC & ELECTRONIC ENGINEERING SHELF NUMBER*******:"<<endl;
 	break;
 	case 9:
 		cout<<"*******SOFTWARE ENGINEERING SHELF NUMBER*******:"<<endl;
 	break;
 	case 10:
 		cout<<"*******ENVIRONMENTAL SCIENCE SHELF NUMBER*******:"<<endl;
 	break;
	 default:
 		cout<<"invalid choice:"<<endl;
 	break;	
 }
 }
 class librarian
 {
  	protected:
	string lb_name,address,email;
	int ID_no;
	public:
	void create();
	void output();
 }; 	
void librarian::create()
{
 cout<<"Enter the name of the librarian:"<<endl;
 cin>>lb_name;
 cout<<"Enter the address of the librarian:"<<endl;
 cin>>address;
 cout<<"Enter the email of the librarian:"<<endl;
 cin>>email;
 cout<<"Enter the ID number of the librarian:"<<endl;
 cin>>ID_no;
 }
 void librarian::output()
{
 cout<<"**********LIBRARIAN DETAILS**********:"<<endl;	
 cout<<"The name of the librarian is:"<<lb_name<<endl;
 cout<<"The address of the librarian is:"<<address<<endl;
 cout<<"The email of the librarian is:"<<email<<endl;
 cout<<"The ID number of the librarian is:"<<ID_no<<endl;
}

class student
{
 	protected:
	string st_name,adm_no,book_issued,address,email,ID_no;
	int phone_no;
	public:
	void make();
	void get();
};
void student::make()
{
 cout<<"Enter the name of the student:"<<endl;
 cin>>st_name;
 cout<<"Enter the address of the student:"<<endl;
 cin>>address;
 cout<<"Enter the email of the student:"<<endl;
 cin>>email;
 cout<<"Enter the admission number of the student:"<<endl;
 cin>>adm_no;
 cout<<"Enter the phone number of the student:"<<endl;
 cin>>phone_no;
 cout<<"Enter the ID number of the student:"<<endl;
 cin>>ID_no;
 cout<<"Enter the number of the book issued to the student:"<<endl;
 cin>>book_issued;
 }	
void student::get()
{
 cout<<"**********STUDENT DETAILS************:"<<endl;	
 cout<<"The name of the student is:"<<st_name<<endl;
 cout<<"The address of the student is:"<<address<<endl;
 cout<<"The email of the student is:"<<email<<endl;
 cout<<"The admission number of the student is:"<<adm_no<<endl;
 cout<<"The phone number of the student is:"<<phone_no<<endl;
 cout<<"The ID number of the student is:"<<ID_no<<endl;
 cout<<"The number of the books issued to the student is:"<<book_issued<<endl;
 }
 class admin
 {
 	protected:
 	string author_name,book_name,book_course,st_name;
 	int book_code,book_price,n,shelf_no,adm_no,date_no,book_issued;
 	public:
 	void admin_details();
 	void book_details();
 };
 void admin::admin_details()
 {
  int choice;
	  cout<<"********ADMIN REQUIREMENT*****:"<<endl;
	  cout<<"\n1.ADD BOOK:"<<endl;
	  cout<<"\n2.UPDATE BOOK:"<<endl;
	  cout<<"\n3.DELETE BOOK:"<<endl;
	  cout<<"\n4.LIST OF ALL BOOKS:"<<endl;
	  cout<<"\n5.EXIT:"<<endl;
	  cout<<"\n Enter the choice you need::"<<endl;
	  cin>>choice; 
	  switch(choice)
	 {
	  case 1:
	  	system("cls");
	  	cout<<"****ADD A NEW BOOK****:"<<endl;
 cout<<"Enter the number of the new books:"<<endl;
 cin>>n;
 for(int i=0;i<n;i++)
 {	  	
 cout<<"Enter the name of the book:"<<endl;
 cin>>book_name;
 cout<<"Enter the author of  the book:"<<endl;
 cin>>author_name;
 cout<<"Enter the code number of the book:"<<endl;
 cin>>book_code;
 cout<<"Enter the price of the book:"<<endl;
 cin>>book_price;
}
system("pause");
      break;
	  case 2:
	system("cls");
	  cout<<"******UPDATE BOOK******:"<<endl;
 cout<<"Enter the number of the books to be updated:"<<endl;
 cin>>n;
 for(int i=0;i<n;i++)
 {	  	
 cout<<"Enter the name of the book:"<<endl;
 cin>>book_name;
 cout<<"Enter the author of  the book:"<<endl;
 cin>>author_name;
 cout<<"Enter the shelf in which the has been stored:"<<endl;
 cin>>shelf_no;
}
system("pause");
     break;
	case 3:
	system("cls");
	cout<<"******DELETE BOOK******:"<<endl;	
	 cout<<"Enter the number of the  books to be removed:"<<endl;
 cin>>n;
 for(int i=0;i<n;i++)
 {	  	
 cout<<"Enter the name of the book to be deleted:"<<endl;
 cin>>book_name;
 cout<<"Enter the author of  the book to be deleted:"<<endl;
 cin>>author_name;
 cout<<"Enter the shelf in which the book has been stored:"<<endl;
 cin>>shelf_no;
}
system("pause");
   break;
   case 4:
   	system("cls");
   	cout<<"*********LIST OF ALL BOOKS**********:"<<endl;
   	cout<<"Enter the list of all the books number:"<<endl;
 cin>>n;
 for(int i=0;i<n;i++)
 {
 cout<<"Enter the name of the faculty for the book entry:"<<endl;
 cin>>book_course;	  	
 cout<<"Enter the name of the book:"<<endl;
 cin>>book_name;
 cout<<"Enter the author of  the book:"<<endl;
 cin>>author_name;
}
system("pause");
   break;
   case 5:
   	cout<<"EXIT:"<<endl;
   break;
 } 
 }
void admin::book_details()
{
 int option;
	  cout<<"********BOOK DETAILS REQUIREMENT*****:"<<endl;
	  cout<<"\n1.BORROW BOOK:"<<endl;
	  cout<<"\n2.RETURN BOOK:"<<endl;
	  cout<<"\n3.BUY BOOK:"<<endl;
	  cout<<"\n4.EXIT:"<<endl;
	  cout<<"\n Enter the option you need::"<<endl;
	  cin>>option; 
	  switch(option)
	  {
	  	case 1:
		system("cls");
	  	cout<<"*******BORROW BOOK******:"<<endl;	
 cout<<"Enter the name of the student:"<<endl;
 cin>>st_name;
 cout<<"Enter the admission number of the student:"<<endl;
 cin>>adm_no;
  for(int i=0;i<n;i++)
  {
 cout<<"Enter the number of the book issued to the student:"<<endl;
 cin>>book_issued;
 cout<<"Enter the date of issue:"<<endl;
 cin>>date_no;
}
system("pause");
		break;
		case 2:
		system("cls");
		cout<<"*******RETURN BOOK******:"<<endl;	
 cout<<"Enter the name of the student:"<<endl;
 cin>>st_name;
 cout<<"Enter the admission number of the student:"<<endl;
 cin>>adm_no;
  for(int i=0;i<n;i++)
  {
 cout<<"Enter the number of the book issued to the student:"<<endl;
 cin>>book_issued;
 cout<<"Enter the date of returning book:"<<endl;
 cin>>date_no;
}
system("pause");
      break;
	  case 3:
	system("cls");
	  cout<<"*******BUY BOOK IF LOST******:"<<endl;	
 cout<<"Enter the name of the student:"<<endl;
 cin>>st_name;
 cout<<"Enter the admission number of the student:"<<endl;
 cin>>adm_no;
  for(int i=0;i<n;i++)
  {
 cout<<"Enter the number of the book issued to the student:"<<endl;
 cin>>book_issued;
 cout<<"Enter the date of issue:"<<endl;
 cin>>date_no;
 cout<<"Enter the Price of the book:"<<endl;
 cin>>book_price;
}
system("pause");
   break;
   case 4:
   	 cout<<"EXIT:"<<endl;
   break;
}	
}
 class administration:public library,public librarian,public student,public admin
 {
	public:
	void write_read();	
};
	void  administration::write_read()
	{
	 int choice;
	 do{
	  cout<<"********VALIDATE WRITE THE CHOICE REQUIREMENT*****:"<<endl;
	  cout<<"\n1.SET LIBRARY DETAILS:"<<endl;
	  cout<<"\n2.DISPLAY LIBRARY DETAILS:"<<endl;
	  cout<<"\n3.CREATE ADMIN DETAILS:"<<endl;
	  cout<<"\n4.OUTPUT ADMIN DETAILS:"<<endl;
	  cout<<"\n5.MAKE STUDENT DETAILS :"<<endl;
	  cout<<"\n6.GET STUDENT DETAILS:"<<endl;
	  cout<<"\n7.ADMIN LIBRARY DETAILS:"<<endl;
	  cout<<"\n8.BOOK LIBRARY DETAILS:"<<endl;
	  cout<<"\n9.EXIT:"<<endl;
	  cout<<"\n Enter the choice you need::"<<endl;
	  cin>>choice;
	  
	administration lib;
  	fstream file;
  	char option; 
	switch(choice)
    {
	 case 1:
	 system("cls");
	 cout<<"********SET LIBRARY DETAILS********:"<<endl;
	 
	file.open("administration.dat",ios::out);
	do
	{
		
	lib.set();
	file.write((char*)&lib,sizeof(administration));
	cout<<"library details have been written successfully ?? \n:"<<endl;
	cout<<"\nDo you need to add more details??\n:"<<endl;
	cin>>option;	
	}while(option=='Y');
	file.close();
	getch();
	system("pause");
	 break; 
	case 2:
	 system("cls");	
	 cout<<"*********DISPLAY LIBRRY DETAILS*********:"<<endl;


	file.open("administration.dat",ios ::in);
	while(!file.eof())
	{
		lib.display();
		file.read((char *)&lib, sizeof(administration));		
	}
	file.close();
	system("pause");	
	 break; 
	 case 3:
	system("cls");
	 cout<<"*********CREATE ADMIN DETAILS*********:"<<endl;
	 
	 file.open("administration.dat",ios::out);
	do
	{
		
	lib.create();
	file.write((char*)&lib,sizeof(administration));
	cout<<"library details have been written successfully ?? \n:"<<endl;
	cout<<"\nDo you need to add more details??\n:"<<endl;
	cin>>option;	
	}while(option=='Y');
	file.close();
	getch();
	 system("pause");	
	 break; 
	  case 4:
	  system("pause");	
	 cout<<"********OUTPUT ADMIN DETAILS********:"<<endl;	
	file.open("administration.dat",ios ::in);
	while(!file.eof())
	{
		lib.output();
		file.read((char *)&lib, sizeof(administration));		
	}
	file.close();
	 system("pause");
	 break; 
	 case 5:
	system("cls");
	 cout<<"*************MAKE STUDENT DETAILS**************:"<<endl;
	
	 file.open("administration.dat",ios::out);
	do
	{
		
	lib.make();
	file.write((char*)&lib,sizeof(administration));
	cout<<"library details have been written successfully ?? \n:"<<endl;
	cout<<"\nDo you need to add more details??\n:"<<endl;
	cin>>option;	
	}while(option=='Y');
	file.close();
	getch();
	 system("pause");	
	 break; 
	 case 6:
	system("cls");
	 cout<<"**********GET STUDENT DETAILS***********:"<<endl;
	
	 
	file.open("administration.dat",ios ::in);
	while(!file.eof())
	{
		lib.get();
		file.read((char *)&lib, sizeof(administration));		
	}
	file.close();
	 system("pause");	
	 break;
	 case 7:
	system("cls");
	 cout<<"**********ADMIN LIBRARY DETAILS***********:"<<endl;
	 
	 file.open("administration.dat",ios::out);
	do
	{
		
	lib.admin_details();
	file.write((char*)&lib,sizeof(administration));
	cout<<"library details have been written successfully ?? \n:"<<endl;
	cout<<"\nDo you need to add more details??\n:"<<endl;
	cin>>option;	
	}while(option=='Y');
	file.close();
	getch();
	 system("pause");	
	 break;
	 case 8:
	system("cls");
	 cout<<"**********BOOK LIBRARY DETAILS***********:"<<endl;
	 
	 file.open("administration.dat",ios::out);
	do
	{
		
	lib.book_details();
	file.write((char*)&lib,sizeof(administration));
	cout<<"library details have been written successfully ?? \n:"<<endl;
	cout<<"\nDo you need to add more details??\n:"<<endl;
	cin>>option;	
	}while(option=='Y');
	file.close();
	getch();
	 system("pause");	
	 break; 
	 case 9:
	 cout<<"EXIT:"<<endl;
	 cout<<"\ninvalid choice:"<<endl;	
	 break; 	
    }
    }while(choice!=0);
    
}

int main()
{   int option;
	administration lib;
	do{
	 cout<<"********FILE HANDLING INFORMATION FOR LIBRARY MANAGEMENT SYSTEM*********:"<<endl;
	  cout<<"\n1.SET DETAILS:"<<endl;	
	   cout<<"\n2.DISPLAY DETAILS:"<<endl;	
	    cout<<"\n3.CREATE ADMIN DETAILS:"<<endl;	
		 cout<<"\n4.OUTPUT ADMIN DETAILS:"<<endl;	
		  cout<<"\n5.MAKE STUDENT DETAILS:"<<endl;	
		   cout<<"\n6.GET STUDENT DETAILS:"<<endl;	
		    cout<<"\n7.ADMIN LIBRARY DETAILS:"<<endl;	
			 cout<<"\n8.BOOK LIBRARY DETAILS:"<<endl;
			   cout<<"\n9.EXIT:"<<endl;	
			  cout<<"Select your option:"<<endl;	
			   cin>>option;
	switch(option)
	{
	case 1:
		system("cls");
		cout<<"********SET DETAILS********:"<<endl;
		lib.set();
		system("pause");
	break;
	case 2:
		system("cls");
		 cout<<"********DISPLAY DETAILS*******:"<<endl;
		lib.display();
		system("pause");
	break;
	case 3:
		system("cls");
		cout<<"**********CREATE ADMIN DETAILS*********:"<<endl;
		lib.create();
		system("pause");
	break;
	case 4:
		system("cls");
		cout<<"********OUTPUT ADMIN DETAILS********:"<<endl;	
		lib.output();
		system("pause");
	break;
	case 5:
		system("cls");
		cout<<"*******MAKE STUDENT DETAILS*******:"<<endl;
		lib.make();
		system("pause");
	break;
	case 6:
		system("cls");
		 cout<<"*********GET STUDENT DETAILS********:"<<endl;	
		lib.get();
		system("pause");
	break;
	case 7:
		system("cls");
		cout<<"*******ADMIN LIBRARY DETAILS********:"<<endl;
		lib.admin_details();
		system("pause");
	break;
	case 8:
		system("cls");
		 cout<<"*******BOOK LIBRARY DETAILS********:"<<endl;
		lib.book_details();
		system("pause");
	break;
	case 9:
		cout<<"EXIT"<<endl;
		
	}	 	
   }while(option!=0);
	getch();
}	