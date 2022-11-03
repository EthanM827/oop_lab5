#include "Celebrity.h"
#include "Thief.h"

using std::type_info;

int main() {
	float income = 0;

	Customer* Tom = new Customer("Tom");
	Celebrity* Chris = new Celebrity("Chris", BURGER, NONE);
	Celebrity* Anna = new Celebrity("Anna", PIZZA, HOTDOG);
	Customer* Brad = new Customer("Brad");
	Celebrity* Jose = new Celebrity("Jose", HOTDOG, BURGER);

	Thief* Jerry = new Thief("Jerry");

	Customer* ptr[6] = {Tom, Chris, Jerry, Anna, Brad, Jose};

	float purchase;
	for (int i = 0; i < 6; i++) {
		if (i == 2) {
			cout << Jerry->show_name() << " stole $" << (0.9 * income) << "!\n";
			Jerry->set_balance(Jerry->get_balance() + (0.9 * income));
			income = income * 0.1;
			continue;
		}
		purchase = ptr[i]->buy_food(BURGER, 1);
		cout << ptr[i]->show_name() << " spends $" << purchase << ".\n";
		income += purchase;
	}

	cout << "Total income: $" << income;
}