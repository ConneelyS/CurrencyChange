#include <iostream>
using namespace std;

int main() {

    string currency;
    int cents {};

    cout << "What currency are you working with?";
    cin >> currency;

    //Euro
    if (currency == "Euro") {

        const int euroValue {100};
        int runningTotal{}, euro{};

        cout << "Enter number of cents: ";
        cin >> cents;

        euro = cents / euroValue;
        runningTotal = cents - (euro * euroValue);

        cout << "Change needed" << endl;
        cout << "Euro: " << euro << "\nCent:" << runningTotal;



    }

    //Dollar
    if (currency == "Dollar") {

        const int dollarValue {100};
        const int quarterValue {25};
        const int dimeValue {10};
        const int nickelValue {5};

        int runningTotal{}, dollar{}, quarter{}, dime{}, nickel{}, penny{};

        cout << "Enter the number of cents: ";
        cin >> cents;

        dollar = cents / dollarValue;
        runningTotal = cents - (dollar * dollarValue);

        quarter = runningTotal / quarterValue;
        runningTotal -= quarter * quarterValue;

        dime = runningTotal / dimeValue;
        runningTotal -= dime * dimeValue;

        nickel = runningTotal / nickelValue;
        runningTotal -= nickel * nickelValue;

        penny = runningTotal;

        cout << "Changed needed: " << endl;
        cout << "Dollars: " << dollar << endl;
        cout << "Quarters: " << quarter << endl;
        cout << "Dimes: " << dime << endl;
        cout << "Nickles: " << nickel << endl;
        cout << "Pennies: " << penny << endl;
    }

    return 0;
}
