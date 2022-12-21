#include<iostream> 
using namespace std;
class BaseClass{
public:
	void BaseClass ();
};
void BaseClass::BaseClass ()
{cout<<"This is a base class constructor one:"<<endl;}
void BaseClass::BaseClass()
{cout<<"This is a base class constructor two:"<<endl;}

class DerivedClass:BaseClass{
public:
void display()
{cout<<"This is a derived class function:"<<endl;}
};
int main(){
DerivedClass obj;
Obj.display();
return 0;
}
