#include <iostream>
#include <iomanip>
using namespace std;

void orderSnack(int x, int y); // Function declaration

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    orderSnack(x, y);

    return 0;
}

void orderSnack(int x, int y) {
    float price = 0.0;

    switch (x) {
        case 1:
            price = 4.00 * y;
            break;
        case 2:
            price = 4.50 * y;
            break;
        case 3:
            price = 5.00 * y;
            break;
        case 4:
            price = 2.00 * y;
            break;
        case 5:
            price = 1.50 * y;
            break;
        default:
            price = 0.0; // Default case to handle invalid input
            break;
    }

    // Print the total price with 2 decimal places
    cout << "Total: R$ " << fixed << setprecision(2) << price << endl;
}
