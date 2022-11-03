#include "Customer.h"

Customer::Customer() {
    name = "Sara";
}

Customer::Customer(string new_name) {
    name = new_name;
}

string Customer::show_name() {
    return name;
}   

float Customer::buy_food(int food, int quantity) {
    float total = 0;
    if (food == BURGER) {
        total = quantity * 8;
    } else if (food == PIZZA) {
        total = quantity * 5;
    } else if (food == HOTDOG) {
        total = quantity * 12;
    }
    return total;
}
