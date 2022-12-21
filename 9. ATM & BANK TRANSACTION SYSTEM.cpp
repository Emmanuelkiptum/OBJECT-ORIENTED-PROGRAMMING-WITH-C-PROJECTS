#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class bank
{
  private:
     string bank_type,bank_name,branch;
  public:
      void bank_set();
	  void bank_display();	
};

 void bank::bank_set()
 {
 	cout<<"Enter the type of the bank:"<<endl;
 	cin>>bank_type;
 	cout<<"Enter the name of the bank:"<<endl;
 	cin>>bank_name;
 	cout<<"Enter the branch of the bank:"<<endl;
 	cin>>branch;
 }
  void bank::bank_display()
 {
 	cout<<"********BANK DETAILS********:"<<endl;
 	cout<<"The type of the bank is:"<<bank_type<<endl;
 	cout<<"The name of the bank is:"<<bank_name<<endl;
 	cout<<"The branch of the bank is:"<<branch<<endl;
 }
 class open_account
 {
  private:
    int balance=5000,pin;
  public:
    void open(); 
 };
 void open_account::open() 
 {
 	cout<<"Enter the pin for the account:"<<endl;
 	cin>>pin;	
  if(pin==1234)
  {
    cout<<"Enter the opening new balance:"<<endl;
 	cin>>balance;	
  }
  else
  {
  	cout<<"Your have entered a wrong pin.please try again later:"<<endl;
  }
 }
 class send_money
 {
  private:
  int amount,balance=5000,pin,phone_no,account_no;
  public:
  void send();	
 };
 void send_money::send()
 {
 	int choice;
 	cout<<"*************SEND MONEY**********:"<<endl;
 	cout<<"\n1.MY PHONE:"<<endl;
 	cout<<"\n2.OTHER PHONE:"<<endl;
 	cout<<"\n3.ANOTHER ACCOUNT:"<<endl;
 	cout<<"\n4.ANOTHER BANK:"<<endl;
 	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
	 case 1:
	 cout<<"**********MY PHONE***********:"<<endl;
	 cout<<"Enter the amount to send money:"<<endl;
   	 cin>>amount;
	  break;
	 case 2:
	 cout<<"**********OTHER PHONE***********:"<<endl;
	 cout<<"Enter the phone number to send money:"<<endl;
 	 cin>>phone_no;
	 cout<<"Enter the amount to send money:"<<endl;
 	 cin>>amount;
	  break; 
	 case 3:
	 cout<<"**********ANOTHER ACCOUNT***********:"<<endl;
	 cout<<"Enter account number to send money:"<<endl;
 	 cin>>account_no;
	 cout<<"Enter the amount to send money:"<<endl;
 	 cin>>amount;
 	 case 4:
	 cout<<"**********ANOTHER BANK***********:"<<endl;
	 cout<<"Enter other bank account number to send money:"<<endl;
 	 cin>>account_no;
	 cout<<"Enter the amount to send money:"<<endl;
 	 cin>>amount;
	  break;
	   
	}
   
	cout<<"Enter the pin for the account:"<<endl;
 	cin>>pin;
	if(pin==1234)
  {
    balance=balance-amount;
	cout<<"The new balance after sending money is:"<<balance<<endl;	
  }
  else
  {
  	cout<<"Your have entered a wrong pin.please try again later:"<<endl;
  } 	
 }
 class deposit_money
 {
  private:
  int amount,balance;
  public:
  void deposit();	
 };
 void deposit_money::deposit()
 {
    cout<<"Enter the amount to deposit:"<<endl;
 	cin>>amount;
	balance=balance+amount;
	cout<<"The new balance after depositing money is:"<<balance<<endl;	 	
 }
  class withdraw_money
 {
  private:
  int amount,balance,pin,agent_no,ATM_no;
  public:
  void withdraw();	
 };
 void withdraw_money::withdraw()
 {
 	int choice;
   	cout<<"************WITHDRAW DETAILS**************:"<<endl;	
    cout<<"\n1.FROM AGENT:"<<endl;
	cout<<"\n2.FROM ATM:"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
	 case 1:
	 cout<<"********FROM AGENT********:"<<endl;
	 cout<<"Enter agent number:"<<endl;
 	cin>>agent_no;
	  cout<<"Enter the amount to withdraw from the agent:"<<endl;
 	cin>>amount;
	 break;
	  case 2:
	 cout<<"********FROM ATM********:"<<endl;
	 cout<<"Enter ATM number:"<<endl;
 	cin>>ATM_no;
	  cout<<"Enter the amount to withdraw from the ATM:"<<endl;
 	cin>>amount;
	 break;	
	}
   
	cout<<"Enter the pin for the account:"<<endl;
 	cin>>pin;
	if(pin==1234)
  {
    balance=balance-amount;
	cout<<"The new balance after withdrawing money is:"<<balance<<endl;	
  }
  else
  {
  	cout<<"Your have entered a wrong pin.please try again later:"<<endl;
  } 	
 }
 class buy_airtime
 {
  private:
  int amount,balance,pin;
  public:
  void airtime();	
 };
 void buy_airtime::airtime()
 {
 	int choice;
 		cout<<"*************SEND MONEY**********:"<<endl;
 	cout<<"\n1.MY PHONE:"<<endl;
 	cout<<"\n2.OTHER PHONE:"<<endl;
 	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		cout<<"**********MY PHONE*************:"<<endl;
		break;
		case 2:
		cout<<"**********OTHER PHONE*************:"<<endl;
		break;	
	}
    cout<<"Enter the amount to buy airtime:"<<endl;
 	cin>>amount;
	cout<<"Enter the pin for the account:"<<endl;
 	cin>>pin;
	if(pin==1234)
  {
    balance=balance-amount;
	cout<<"The new balance after withdrawing money is:"<<balance<<endl;	
  }
  else
  {
  	cout<<"Your have entered a wrong pin.please try again later:"<<endl;
  } 	
 }
 class loans_savings
 {
 private:
    int balance,amount;
  public:
    void loanSaving(); 
 };
  void loans_savings::loanSaving()
  {
   int choice;
   	cout<<"************LOANS AND SAVINGS**************:"<<endl;	
    cout<<"\n1.LOANS:"<<endl;
	cout<<"\n2.SAVINGS:"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
	    cout<<"******LOAN DETAILS******:"<<endl;
	    cout<<"Enter amount for your loan request:"<<endl;
		cin>>amount;
		if(amount>=1000)
		{
		cout<<"You cannot borrow your loans.since your limit is below Sh.1000:"<<endl;
		}
		else
		{
	     balance=balance+amount;
		 cout<<"The new balance after loan request amount is:"<<balance<<endl;		
		}
	break;
	case 2:
	    cout<<"******SAVING DETAILS******:"<<endl;
	    cout<<"Enter amount for your saving:"<<endl;
		cin>>amount;
	     balance=balance-amount;
		 cout<<"The new balance after saving amount is:"<<balance<<endl;		
	break;	
	}
  } 
 class check_balances
 {
  private:
    int balance,pin;
  public:
    void balances(); 
 };
 void check_balances::balances() 
 {
 	cout<<"Enter the pin for the account:"<<endl;
 	cin>>pin;	
  if(pin==1234)
  {
    cout<<"The new balance is:"<<balance<<endl;	
  }
  else
  {
  	cout<<"Your have entered a wrong pin.please try again later:"<<endl;
  }
 }
 class handling:public bank,public open_account,public send_money,public deposit_money,public withdraw_money,public buy_airtime,public loans_savings,public check_balances
 {
  public:
    void validate()
	{
	 int option;
	 do{
	 cout<<"************BANK MANAGEMENT SYSTEM**************:"<<endl;	
    cout<<"\n1.BANK SET:"<<endl;
	cout<<"\n2.BANK DISPLAY:"<<endl;
	cout<<"\n3.OPEN ACCOUNT:"<<endl;
	cout<<"\n4.SEND MONEY:"<<endl;
	cout<<"\n5.DEPOSIT MONEY:"<<endl;
	cout<<"\n6.WITHDRAW MONEY:"<<endl;
	cout<<"\n7.BUY AIRTIME:"<<endl;
	cout<<"\n8.LOANS AND SAVINGS:"<<endl;
	cout<<"\n9.CHECK BALANCES:"<<endl;
	cout<<"Enter your option:"<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
			system("cls");
		cout<<"***************BANK SET*****************:"<<endl;
		bank_set();
		system("pause");
		break;
		case 2:
			system("cls");
		cout<<"***************BANK DISPLAY*****************:"<<endl;
		bank_display();
		system("pause");
		break;
		case 3:
			system("cls");
		cout<<"***************OPEN ACCOUNT*****************:"<<endl;
		open();
		system("pause");
		break;
		case 4:
			system("cls");
		cout<<"***************SEND MONEY*****************:"<<endl;
		send();
		system("pause");
		break;
		case 5:
			system("cls");
		cout<<"***************DEPOSIT MONEY*****************:"<<endl;
		deposit();
		system("pause");
		break;
		case 6:
			system("cls");
		cout<<"**************WITHDRAW MONEY*****************:"<<endl;
		withdraw();
		system("pause");
		break;
		case 7:
			system("cls");
		cout<<"***************BUY AIRTIME*****************:"<<endl;
		airtime();
		system("pause");
		break;
		case 8:
			system("cls");
		cout<<"***************LOAN AND SAVINGS*****************:"<<endl;
		loanSaving();
		system("pause");
		break;
		case 9:
			system("cls");
		cout<<"***************CHECK BALANCE*****************:"<<endl;
		balances();
		system("pause");
		break;	
	}
}while(option !=0);
	} 	
 };
 int main()
 {
 handling bk;
  bk.validate();	
getch();
 }