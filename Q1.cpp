#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    int waterLevel;
    int coffeeBeans;

public:
    // Constructor
    CoffeeMachine(int water, int beans) {
        waterLevel = water;
        coffeeBeans = beans;
    }

    // Public method
    void makeCoffee() {
        if (waterLevel < 100) {
            cout << "Insufficient water." << endl;
        } else {
            waterLevel -= 100;
            cout << "Coffee is ready!" << endl;
        }
    }
};

int main() {
    CoffeeMachine machine(200, 50);

    machine.makeCoffee();
    machine.makeCoffee();
    machine.makeCoffee();

    return 0;
}
