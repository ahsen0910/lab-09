#include <iostream>
using namespace std;

// Abstract class
class Payment {
public:
    virtual void processPayment(double amount) = 0;
};

// Derived class: CreditCard
class CreditCard : public Payment {
public:
    void processPayment(double amount) override {
        double total = amount + (amount * 0.02); // 2% service fee
        cout << "Processing Credit Card payment of $" 
             << total << endl;
    }
};

// Derived class: PayPal
class PayPal : public Payment {
public:
    void processPayment(double amount) override {
        if (amount > 500) {
            amount -= 10; // Apply discount
        }

        cout << "Processing PayPal payment of $" 
             << amount << endl;
    }
};

int main() {
    CreditCard cc;
    PayPal pp;

    cc.processPayment(1000);
    pp.processPayment(1000);

    return 0;
}
