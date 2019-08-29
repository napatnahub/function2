#include<iostream>
#include<string>

using namespace std;
void DisplayMenu();
float update_balance (  string,  float,  float &balance);

int main()
{
float balance =10000;
float dollars;
string command;
	
	cout<<"your balance is 10000.00"<<endl;
	do {
		DisplayMenu();
		cin >> command;
	update_balance(command, dollars, balance);
		


	} while (command!="0");
	cout << "\n...Exit Program...\n";
	return(0);
}
float update_balance (string command, float dollars, float &balance)

{
	if (command == "1") {
			
			cout<<"Input amount:";
			cin>>dollars;
		 balance=balance-dollars;
	
		cout<<"your balance:"<<balance;
		 
		return (balance);}

	else if (command == "2") {
			
			cout<<"Input amount:";
			cin>>dollars;
		 balance=balance+dollars;
	
		cout<<"your balance:"<<balance;
		 
		return (balance);}
}
void DisplayMenu()
{
	cout << endl;
	cout << "Input command(1 or withdraw,2 deposit):" ;
	
	
	
}