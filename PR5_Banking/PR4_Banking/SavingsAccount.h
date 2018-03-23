#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_
#include <vector>
#include <stdexcept>
#include "Account.h"

class SavingsAccount : public Account {
private:
	std::string type = "savings";
public:
	SavingsAccount::SavingsAccount(Customer *cust, int id) : Account(cust, id) {}
	std::string to_string() {
	std::stringstream ss; // for composing the string that describes this account

												  // FIXME: Add information about the customer who owns this account.
	double balance = get_balance();
	double account_number = get_account();
	// end of my code
	ss << "  Balance: " << balance << std::endl;
	ss << "  Account ID: " << account_number << std::endl;
	return ss.str();
	}
	void deposit(double amt) {}
	void withdraw(double amt) {}
	void add_interest() {}
	std::string getType() {
		return type;
	}
};

#endif