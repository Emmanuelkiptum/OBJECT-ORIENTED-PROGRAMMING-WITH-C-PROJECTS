#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class m_pesa
{
  private:
    string acc_type,depositor_name;
    public:
    double acc_no,balance,amount,pin=1234,phone_no,agent_no;
    m_pesa();
    void set();
    void deposit();
    void withdraw();
    void sent();
    void buyAirtime();
    void display();  
     ~m_pesa();
};
 m_pesa::m_pesa()
{
 cout<<"Default constructor is called:"<<endl;
   pin=1234;
   agent_no=8888;
   acc_no=0000;
   balance=0;
}
void m_pesa::set()
{
    cout<<"\n*****M-PESA DETAILS*****"<<endl;
    cout<<"Enter the type of the account:"<<endl;
    cin>>acc_type;
    cout<<"Enter the agent no:"<<endl;
    cin>>agent_no;
    cout<<"Enter the name of the depositor:"<<endl;
    cin>>depositor_name;
    cout<<"Enter the new opening account balance:"<<endl;
    cin>>balance;   
}
void m_pesa::deposit()
{
  cout<<"Enter the agent number:"<<endl;
  cin>>agent_no;  
  cout<<"\nEnter the amount to deposit:"<<endl;
  cin>>amount; 
  balance=balance+amount;
  cout<<"balance after the deposit:"<<balance<<endl;     
}
void m_pesa::withdraw()
{
  cout<<"\nEnter the amount to withdraw:"<<endl;
  cin>>amount;
  if(balance>amount) 
    {
  balance=balance-amount;
  cout<<"balance after the withdrawing:"<<balance<<endl;
    } 
  else
   {
 cout<<"Insufficient balance.Please try again later:"<<endl;  
   } 
  
 cout<<"Enter the m-pesa pin:"<<endl;
  cin>>pin;
  if(pin=1234)
    {
  cout<<"balance after the withdrawing:"<<balance<<endl;
    } 
  else
   {
 cout<<"Your have entered wrong pin.Please try again later:"<<endl;  
   } 
             
}
void m_pesa::sent()
{
  cout<<"\nEnter the amount to sent:"<<endl;
  cin>>amount;
  cout<<"Enter the phone number to sent money:"<<endl;
  cin>>phone_no;  
  if(balance>amount) 
    {
  balance=balance-amount;
cout<<"balance after sending money:"<<balance<<endl;
    } 
  else
   {
 cout<<"Insufficient balance.Please try again later:"<<endl;  
   } 
   
  cout<<"Enter the m-pesa pin:"<<endl;
  cin>>pin;
  if(pin=1234)
    {
  cout<<"balance after the withdrawing:"<<balance<<endl;
    } 
  else
   {
 cout<<"Your have entered wrong pin.Please try again later:"<<endl;  
   } 
           
}
void m_pesa::buyAirtime()
{
  cout<<"\nEnter the amount to buy airtime:"<<endl;
  cin>>amount;
  cout<<"Enter the phone number to buy airtime:"<<endl;
  cin>>phone_no;  
  if(balance>amount) 
    {
  balance=balance-amount;
cout<<"balance after buying airtime:"<<balance<<endl;
    } 
  else
   {
 cout<<"Insufficient balance.Please try again later:"<<endl;  
   } 
    
  cout<<"Enter the m-pesa pin:"<<endl;
  cin>>pin;
  if(pin=1234)
    {
  cout<<"balance after the withdrawing:"<<balance<<endl;
    } 
  else
   {
 cout<<"Your have entered wrong pin.Please try again later:"<<endl;  
   } 
       
}
    
void m_pesa::display()
{
cout<<"\n****M-PESA DETAILS INFORMATION****"<<endl;
cout<<"The type of the account is:"<<acc_type<<endl;
cout<<"The account number is:"<<acc_no<<endl;
cout<<"The name of the depositor is:"<<depositor_name<<endl;
cout<<"The new account balance:"<<balance<<endl;  
}
 m_pesa::~m_pesa()
{
  cout<<"Destructor is called:"<<endl;
   pin=1234;
   acc_no=0000;
   balance=0;
}
    
int main()
{
  m_pesa mp;
  int choice;
  do{
 cout<<"*****M-PESA TRANSACTIONS DETAILS****"<<endl;
   cout<<"\n1.SET"<<endl;
   cout<<"\n2.DEPOSIT"<<endl;   
   cout<<"\n3.WITHDRAW"<<endl;   
   cout<<"\n4.SENT"<<endl;   
   cout<<"\n5.BUY AIRTIME"<<endl;   
   cout<<"\n6.DISPLAY"<<endl; 
   cout<<"\n7.EXIT"<<endl; 
   cout<<"Enter the choice you need:"<<endl;  
   cin>>choice;
    switch(choice)
     {
       case 1:
           cout<<"*******SET*******"<<endl;
           mp.set();
           system("pause");
       break;
       case 2:
           cout<<"*******DEPOSIT*******"<<endl;
           mp.deposit();
            system("pause");
       break;
       case 3:
           cout<<"*******WITHDRAW*******"<<endl;
           mp.withdraw();
            system("pause");
       break;
       case 4:
           cout<<"*******SENT*******"<<endl;
           mp.sent();
            system("pause");
       break; 
       case 5:
           cout<<"*******BUY AIRTIME*******"<<endl;
           mp.buyAirtime();
            system("pause");
       break;
       case 6:
           cout<<"*******DISPLAY*******"<<endl;
           mp.display();
            system("pause");
       break;                
     }         
    }while(choice !=0);
    
getch();
}