#pragma once

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;

#define BURGER 1
#define PIZZA 2
#define HOTDOG 3
#define NONE 0

class Customer {
protected:
	string name;
public:
	Customer();
	Customer(string name);
	virtual string show_name();
	virtual float buy_food(int food, int quantity);
};

