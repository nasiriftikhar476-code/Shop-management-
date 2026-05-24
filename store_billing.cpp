#include <iostream>
using namespace std;

void grocery_department(float price, float &total) {
    total = total + price;
}

void clothing_department(float price, float &total) {
    total = total + price;
}

void electronics_department(float price, float &total) {
    total = total + price;
}

int main() {
    float total_bill = 0;
    float price = 0;
    int choice = -1;
    char loyalty;

    while (choice != 0) {
        cout << "1. Grocery\n2. Clothing\n3. Electronics\n0. Finish Bill\nEnter Choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        cout << "Enter Item Price: ";
        cin >> price;

        switch(choice) {
            case 1:
                grocery_department(price, total_bill);
                break;
            case 2:
                clothing_department(price, total_bill);
                break;
            case 3:
                electronics_department(price, total_bill);
                break;
            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
    }

    cout << "Do you have a Loyalty Card? (y/n): ";
    cin >> loyalty;

    if (loyalty == 'y' || loyalty == 'Y') {
        total_bill = total_bill - (total_bill * 0.05);
        cout << "Final Bill with 5% Discount: " << total_bill << endl;
    } else {
        cout << "Final Bill: " << total_bill << endl;
    }

    return 0;
}
