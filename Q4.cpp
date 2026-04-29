#include "SecuritySystem.h"

// Constructor
BiometricScanner::BiometricScanner() {
    attempts = 0;
}

// Function Implementation
void BiometricScanner::authenticate() {
    int id;

    while (attempts < 3) {
        cout << "Enter Fingerprint ID: ";
        cin >> id;

        if (id == 1234) {
            cout << "Access Granted." << endl;
            return;
        } else {
            attempts++;
            cout << "Invalid ID!" << endl;
        }
    }

    cout << "System Locked!" << endl;
}
