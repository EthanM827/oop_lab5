#pragma once
#include "Customer.h"
class Celebrity : public Customer {
private:
	int fav_food;
	int allergy;

public:
	Celebrity();
	Celebrity(string name, int favorite_food, int allergic_food);
	string show_name();
	float buy_food(int food, int quantity);
};

