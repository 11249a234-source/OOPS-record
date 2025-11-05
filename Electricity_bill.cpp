#include <iostream>
using namespace std;

class ElectricityBill {
    float units;
    char customerType;
    float totalBill;

public:
    void input() {
        cout << "Enter the number of units consumed: ";
        cin >> units;
        if (units < 0) {
            cout << "Invalid input! Units consumed cannot be negative." << endl;
            exit(1);
        }
        cout << "Enter customer type (R for Residential, C for Commercial): ";
        cin >> customerType;
    }

    void calculate() {
        if (customerType == 'R' || customerType == 'r') {
            if (units <= 100)
                totalBill = units * 1.50;
            else if (units <= 200)
                totalBill = 100 * 1.50 + (units - 100) * 2.00;
            else if (units <= 300)
                totalBill = 100 * 1.50 + 100 * 2.00 + (units - 200) * 2.50;
            else
                totalBill = 100 * 1.50 + 100 * 2.00 + 100 * 2.50 + (units - 300) * 3.00;
        } else if (customerType == 'C' || customerType == 'c') {
            if (units <= 100)
                totalBill = units * 2.50;
            else if (units <= 200)
                totalBill = 100 * 2.50 + (units - 100) * 3.00;
            else if (units <= 300)
                totalBill = 100 * 2.50 + 100 * 3.00 + (units - 200) * 3.50;
            else
                totalBill = 100 * 2.50 + 100 * 3.00 + 100 * 3.50 + (units - 300) * 4.00;
        } else {
            cout << "Invalid customer type entered!" << endl;
            exit(1);
        }
        totalBill += 50.00; // Fixed charge
    }

    void display() {
        cout << "\nElectricity Bill Details:" << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Customer Type: " << ((customerType == 'R' || customerType == 'r') ? "Residential" : "Commercial") << endl;
        cout << "Total Bill (including fixed charges): Rs. " << totalBill << endl;
    }
};

int main() {
    ElectricityBill bill;
    bill.input();
    bill.calculate();
    bill.display();
    return 0;
}