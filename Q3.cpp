#include <iostream>
using namespace std;

// Abstract Base Class
class Package {
private:
    double weight;

protected:
    // Protected function to allow derived classes to access weight
    double getWeight() {
        return weight;
    }

public:
    Package(double w) {
        weight = w;
    }

    // Pure virtual function
    virtual void calculateCost() = 0;
};

// Derived Class: LocalPackage
class LocalPackage : public Package {
public:
    LocalPackage(double w) : Package(w) {}

    void calculateCost() override {
        double cost = getWeight() * 5;

        if (getWeight() > 20) {
            cost += 15; // Heavy Load fee
        }

        cout << "Local Package Cost: $" 
             << cost << endl;
    }
};

// Derived Class: InternationalPackage
class InternationalPackage : public Package {
public:
    InternationalPackage(double w) : Package(w) {}

    void calculateCost() override {
        double cost = (getWeight() * 15) + 25;

        cout << "International Package Cost: $" 
             << cost << endl;
    }
};

int main() {
    // Base class pointers
    Package* p1;
    Package* p2;

    LocalPackage local(25);
    InternationalPackage international(10);

    p1 = &local;
    p2 = &international;

    // Calling correct functions using base class pointer
    p1->calculateCost();
    p2->calculateCost();

    return 0;
}
