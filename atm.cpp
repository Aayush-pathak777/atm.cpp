#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int balance=10000,option,deposit,withdraw,pin;
	cout<<"******************MENU*******************"<<endl;
	cout<<"*                                           *"<<endl;
	cout<<"*             1.check balance               *"<<endl;
	cout<<"*             2.deposit                     *"<<endl;
	cout<<"*             3.transfer                    *"<<endl;
	cout<<"*             4.withdrawl                   *"<<endl;
	cout<<"*             5.exit                        *"<<endl;
	cout<<"*                                           *"<<endl;
	cout<<"*                                           *"<<endl;
	cout<<"*********************************************"<<endl;
	cout<<"select your option"<<endl;
	cin>>option;
	if(option==1)
	{
		cout<<"please enter your pin"<<endl;
		cin>>pin;
		if(pin==0001){
			cout<<"your current balance is"<<balance<<endl;
            cout << "thank you !! please visit again." << endl;
            main();
		}
		else
		{
			cout<<"enter valid pin"<<endl;
            main();
		}
	}
	if(option==2)
	{
		cout<<"please enter your pin"<<endl;
		cin>>pin;
		if(pin==0001){
	   	cout<<"enter the amount you want to deposit"<<endl;
	   	cin>>deposit;
	   	cout<<"your totall balance"<<"="<<deposit+balance<<endl<<endl;
           cout << "thank you !! please visit again." << endl;
           main();
    	}
    	else{
           cout<<" please enter valid pin"<<endl;
           main();
        }
	}
	if(option==3)
	{
		cout<<"please enter your pin"<<endl;
		cin>>pin;
		if(pin==0001){
	   	cout<<"this option is currently un-available \n"<<endl;
           cout << "thank you !! please visit again." << endl;
           
    	}
	    else{
   		cout<<"please enter valid pin"<<endl;
           main();
        }
	}
	if(option==4)
	{
		cout<<"enter the amount you want to withdraw"<<endl;
		cin>>withdraw;
		cout<<"please enter your pin"<<endl;
		cin>>pin;
		if(pin==0001)
		{
			cout<<"your current balance available is"<<balance-withdraw<<endl;
            cout << "thank you !! please visit again." << endl;
            main();
		}
		else{
			cout<<"enter valid pin"<<endl;
            main();
            }
	}
    if(option==5)
	{
		cout<<"thank you !!! please visit again."<<endl;
        exit(0);
	if(option!=1 || option!=2 ||option!=3 ||option!=4 ||option!=5)
	{
		cout<<"please enter valid number"<<endl; 
        main();
	}
	}
    return 0;
}
