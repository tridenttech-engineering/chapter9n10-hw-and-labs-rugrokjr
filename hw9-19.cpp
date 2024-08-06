//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Kendra Ruggiero> 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Function prototype
double getPayment(int, double, int);
int main()
{
    // Declare variables
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;
    char another = 'Y';
    while (toupper(another) == 'Y')
    {
        cout << "Enter the car price after any trade-in value: ";
        cin >> carPrice;
        cout << "Rebate: ";
        cin >> rebate;
        cout << "Credit union rate (as a percentage): ";
        cin >> creditRate;
        cout << "Dealer rate (as a percentage): ";
        cin >> dealerRate;
        cout << "Term in years: ";
        cin >> term;
        // Ensure rates are in decimal form
        if (creditRate >= 1)
            creditRate /= 100;
        if (dealerRate >= 1)
            dealerRate /= 100;
        // Call function to calculate payments
        creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);
        dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);
        // Display payments
        cout << fixed << setprecision(2) << endl;
        cout << "Credit union payment: $" << creditPayment << endl;
        cout << "Dealer payment: $" << dealerPayment << endl;
        if (creditPayment < dealerPayment)
            cout << "You should finance through the credit union.";
        else if (creditPayment > dealerPayment)
            cout << "You should finance through the dealer.";
        else
            cout << "You can finance through either.";
        cout << endl;
        cout << "Another (Y/N)? ";
        cin >> another;
    } // End while
    return 0;
} // End of main function
// Function to calculate and return a monthly payment
double getPayment(int prin, double monthRate, int months)
{
    double monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
    return monthPay;
} // End of getPayment function