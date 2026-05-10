#include <iostream>
using namespace std;

int main()
{
    double price, discountPercent, discountAmount, discountedPrice;

    cout << "Enter item price: ";
    cin >> price;

    cout << "Enter discount percent (decimal): ";
    cin >> discountPercent;

    discountAmount = price * discountPercent;
    discountedPrice = price - discountAmount;

    cout << "Discount Amount: $" << discountAmount << endl;
    cout << "Discounted Price: $" << discountedPrice << endl;

    return 0;
}