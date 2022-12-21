#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class library 
{
	protected:
	string sch_name,course_name,book_name,n;
	int book_no,shelf_no;
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
 cin>>n;
 for(int i=0;i<100;i++)
 {
 cout<<"Enter the name of the book:"<<endl;
 cin>>book_name;
 cout<<"Enter the code number of the book:"<<endl;
 cin>>book_no;
} 
}
void library::display()
{
 cout<<"********LIBRARY DETAILS********:"<<sch_name<<endl;	
 cout<<"The name of the institution is:"<<sch_name<<endl;
 cout<<"The name of the faculty is:"<<course_name<<endl;
 cout<<"The number of books in the institution is:"<<n<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<"The name of the book is:"<<book_name<<endl;
 cout<<"The code number of the book is:"<<book_no<<endl;
} 
}
int main()
{
  library book;
  book.set();
  book.display();
	return 0;
}