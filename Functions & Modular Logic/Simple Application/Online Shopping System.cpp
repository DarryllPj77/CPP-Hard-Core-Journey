// Online Shopping System
#include <iostream>
using namespace std;

// Function to compute total cost
float Compute_Total_Cost(float price[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += price[i];
    }
    return total;
}

int main() {
    int choose;
    const int SIZE = 5;
    string product[SIZE];
    float price[SIZE];
    bool hasData = false; // to check if user has entered product info

    do {
        cout << "\n==========================================================\n";
        cout << "Welcome to Online Shopping System (TOTAL COST computation)\n";
        cout << "Enter from 1 to 4 what option you want to do:\n";
        cout << "[1] Enter the name and price of each product\n";
        cout << "[2] Display all product list\n";
        cout << "[3] Compute total cost\n";
        cout << "[4] EXIT\n";
        cout << "==========================================================\n";
        cout << "Enter your choice: ";
        cin >> choose;

        switch (choose) {
        case 1:
            cout << "\nEnter the name of the products and their prices:\n";
            for (int i = 0; i < SIZE; i++) {
                cout << "Product " << i + 1 << " name: ";
                cin >> product[i];
                cout << "Enter price of " << product[i] << ": ₱";
                cin >> price[i];
            }
            cout << "\n✅ Products and prices stored successfully!\n";
            hasData = true;
            break;

        case 2:
            if (!hasData) {
                cout << "\n⚠️ No product data found. Please enter products first.\n";
            } else {
                cout << "\n--- Product List ---\n";
                for (int i = 0; i < SIZE; i++) {
                    cout << "Product: " << product[i] << "\tPrice: ₱" << price[i] << endl;
                }
            }
            break;

        case 3:
            if (!hasData) {
                cout << "\n⚠️ Please enter product data first before computing total.\n";
            } else {
                float total = Compute_Total_Cost(price, SIZE);
                cout << "\n💰 The TOTAL cost of all products is: ₱" << total << endl;
            }
            break;

        case 4:
            cout << "\n👋 PROGRAM EXITING. Thank you for using the system!\n";
            return 0;

        default:
            cout << "\n❌ Invalid choice! Please enter 1 to 4 only.\n";
        }

    } while (choose != 4);

    return 0;
}
