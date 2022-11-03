#include "Celebrity.h"

int main() {
	int income = 0;

	Customer* Tom = new Customer("Tom");
	Celebrity* Chris = new Celebrity("Chris", BURGER, NONE);
	Celebrity* Anna = new Celebrity("Anna", PIZZA, HOTDOG);
	Customer* Brad = new Customer("Brad");
	Celebrity* Jose = new Celebrity("Jose", HOTDOG, BURGER);

	Customer* ptr[5] = {Tom, Chris, Anna, Brad, Jose};

	int purchase;
	for (int i = 0; i < 5; i++) {
		purchase = ptr[i]->buy_food(BURGER, 1);
		cout << ptr[i]->show_name() << " spends $" << purchase << ".\n";
		income += purchase;
	}

	cout << "Total income: $" << income;
}