#include <iostream>
#include <vector>
#include <string>

using namespace std;
// her is where my class fir backaccount set up
class Bankaccount {
	public:
	// my defult constructor
		Bankaccount() : accountHoldername("unknowm"){
			cout << "account not found " << endl;
		}
		// my parameterized constructor
		Bankaccount(string name) {
			this->accountHoldername = name;
			
				
		}
		// help save the name to bankaccount
		void setname(string& newname) {
			accountHoldername = newname;
		}
		// help get the name to check if that account is right
		string getname(){
			return accountHoldername;
		}
		// idk how to use this or reat
		string getNumber() {
			return accountNumber;
		}
		
		// use to change hte ballance
		double deposit;
		double withdraw;
		

private:
	string accountHoldername;
	string accountNumber;
	double balance;

	
};
int main() {
	// here us we i set up my bankaccount mangent it
	Bankaccount accountname;
	vector<Bankaccount> account;
	// my void set i use to save time and pain to put them inside my code
	void Menu(); 
	void fail();


	// my viar for my program
	double d;
	double w;
	double balance = 0;
	double temp;
	int i;
	int k = 0;
	int a;
	string id;
	string name;

	Menu();
	cin >> i;
	
	// we loop until they want to get out the program
	do {
		// where the use sign a account or log into it
		switch (i) {
		case 1:
			cout << "enter name" << endl;
			cin >> name;
			// where we get the name and add to the vector
			accountname.setname(name);
			account.push_back(Bankaccount(accountname));
			
			
			Menu();
			cin >> i;
			
			
			break;
			
			
		case 2:
			
			cout << "enter name" << endl;
			cin >> name;
			// here to look in vector to see how many and check each one for the name
			for (int j = 0; j < account.size(); j++) {
				Bankaccount account(name);
				// when we get the name we can ask what they want to do
				if (accountname.getname() == name) {
					cout << "what do you want" << endl;
					cout << " 1 deposit" << endl;
					cout << " 2 withdraw" << endl;
					cout << " 3 exit account" << endl;
					cin >> a;
// we loop until they want to get out the account
					do {
						
						switch (a) {
						case 1:
							// to add then amount to their account
								cout << " how much you want to deposit" << endl;
								cin >> d;
								balance = balance + d;

								cout << "what do you want" << endl;
								cout << " 1 deposit" << endl;
								cout << " 2 withdraw" << endl;
								cout << " 3 exit account" << endl;
								cin >> a;
								break;
							


						case 2:
							// where they withdraw the amount they need
								cout << " how much you want to withdraw" << endl;
								cin >> w;
								temp = balance;
								balance = balance - w;
								// if they going under or neg we stop and say they have not money then go back before the change
								if (balance < 0) {
									cout << "no money" << endl;
									balance = temp;

								}
								cout << "what do you want" << endl;
								cout << " 1 deposit" << endl;
								cout << " 2 withdraw" << endl;
								cout << " 3 exit account" << endl;
								cin >> a;
								break;
							

						case 3:
							// leave the account but not the program yet
								cout << "exit account" << endl;
								

								break;

							

						default:
							// if they do something outside the program can do we ask to do to again and not have the program breaking
							if (cin.fail()) {

								fail();

								cout << "what do you want" << endl;
								cout << " 1 deposit" << endl;
								cout << " 2 withdraw" << endl;
								cout << " 3 exit account" << endl;
								cin >> a;

								break;
							}
							else {
								cout << "invaild input try again" << endl;

								cout << "what do you want" << endl;
								cout << " 1 deposit" << endl;
								cout << " 2 withdraw" << endl;
								cout << " 3 exit account" << endl;
								cin >> a;
								break;
							}
						}
					} while (a != 3);
				}
			
			}

			Menu();
			cin >> i;
			break;
			// make the user to leave the program
		case 3:
			cout << "now exit program" << endl;
			break;
		default:
			if (cin.fail()) {
				cin.clear();
				cin.ignore();
				cout << "invaild input try again" << endl;
				Menu();
				cin >> i;
				break;
			}
			else {
				cout << "invaild input try again" << endl;
				Menu();
				cin >> i;
				break;
			}

		}


	} while (i != 3);
		return 0;
}
// here is where i set up my void function
void Menu() {
	cout << "1 for sign up" << endl;
	cout << "2 for log in" << endl;
	cout << "3 exit" << endl;

}
void fail() {
	
		cin.clear();
		cin.ignore();
		cout << "try again" << endl;
		
	
}

