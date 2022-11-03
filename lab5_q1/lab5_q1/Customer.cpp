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

int Customer::buy_food(int food, int quantity) {
    int total = 0;
    if (food == 1) {
        total = quantity * 8;
    } else if (food == 2) {
        total = quantity * 5;
    } else if (food == 3) {
        total = quantity * 12;
    }
    return total;
}
