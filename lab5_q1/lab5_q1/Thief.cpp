#include "Thief.h"

Thief::Thief() {
	balance = 0;
}

Thief::Thief(string new_name) {
	name = new_name;
	balance = 0;
}

float Thief::get_balance() {
	return balance;
}

void Thief::set_balance(float amount) {
	balance = amount;
}

string Thief::show_name() {
	return Customer::show_name() + ", (thief)";
}