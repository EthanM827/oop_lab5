#pragma once
#include "Customer.h"
class Thief : public Customer {
private:
	float balance;
public:
	Thief();
	Thief(string name);
	float get_balance();
	void set_balance(float amount);
	string show_name();
};

