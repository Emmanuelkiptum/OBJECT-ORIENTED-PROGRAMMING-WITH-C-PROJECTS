#include<iostream>
using namespace std; 
class BaseClass{
public:
void display();
};
void BaseClass:: display (){cout<<"This is a base class function:"<<endl;}

class DerivedClass:BaseClass{
public:
void display();
};
void DerivedClass::display(){cout<<"This is a derived class function:"<<endl;}
int main(){
DerivedClass obj= DerivedClass();
Obj.display();
return 0;
}
