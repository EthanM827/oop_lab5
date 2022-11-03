#include "Celebrity.h"

Celebrity::Celebrity() {
    fav_food = BURGER;
    allergy = PIZZA;
}

Celebrity::Celebrity(string new_name, int favorite_food, int allergic_food) {
    name = new_name;
    fav_food = favorite_food;
    allergy = allergic_food;
}

string Celebrity::show_name() {
    return "Lady/Gentleman " + Customer::show_name();
}

float Celebrity::buy_food(int food, int quantity) {
    float total = Customer::buy_food(food, quantity);
    int tip = 0;
    if (food == fav_food) {
        tip = 5;
    } else if (food != allergy) {
        tip = 2;
    }
        
    total += tip;

    return total;
}