#include <iostream>
using namespace std;

int main()
{
    string lastName;
    int credits;
    double tuition;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter credits taken: ";
    cin >> credits;

    tuition = credits * 250 + 100;

    cout << "Last Name: " << lastName << endl;
    cout << "Total Tuition: $" << tuition << endl;

    return 0;
}