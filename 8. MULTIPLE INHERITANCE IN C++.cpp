#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class person
{
protected:
string name;
int phone_no ;
public:
void details();
};
void person::details()
{
cout<<"Enter the name of the person:"<<endl;
cin>>name;
cout<<"Enter the phone number  of the person:"<<endl;
cin>>phone_no;
}
class student
{
protected:
string sub_name;
double marks[5] ;
public:
void mark();
};
void student::mark()
{
for(int i=0;i<5;i++)
{
cout<<"Enter the name of the subject:"<<endl;
cin>>sub_name;
cout<<"Enter the marks  of the subject:"<<endl;
cin>>marks[i];
}
}
class compute:public person,public student
{
protected:
double sum,average ;
public:
void display_total();
};
void compute::display_total()
{
sum=marks[0]+ marks[1]+ marks[2]+ marks[3]+ marks[4];
average=sum/5;
cout<<"\nThe Sum  of the subject is:"<<sum<<endl;
cout<<"The average of the subjects is:"<<average<<endl;
}
int main()
{
compute st;
st.details();
st.mark();
st.display_total();
getch();
}
