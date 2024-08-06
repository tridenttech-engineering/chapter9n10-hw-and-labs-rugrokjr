///Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Kendra Ruggiero> on <7-30-24>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double getPayment(double principal, double monthlyRate, int months);
int main()
{
    //declare variables
    double carprice = 0.0;
    double tradein = 0.0;
    double interestRate = 0.0;
    double monthlyInterest = 0.0;
    int month = 0; // term used in months
    double loanPayment = 0.0;
    double dealerPayment = 0.0;

    //get user input
    cout << "Enter the car price amount: ";
    cin >> carprice;
    cout << "Enter the trade in amount: ";
    cin >> tradein;
    cout << "Enter the annual interest rate of the dealer: ";
    cin >> interestRate;
    cout << "Enter the annual loan interest rate: ";
    cin >> monthlyInterest;
    cout << "Enter the term payment in months: ";
    cin >> month;
    //ensure rates are in decimal form
    if (interestRate >= 1) interestRate /= 100;
    if (monthlyInterest >= 1) monthlyInterest /= 100;
    //calculate payments
    dealerPayment = getPayment(carprice - tradein, interestRate / 12, month);
    loanPayment = getPayment(carprice - tradein, monthlyInterest / 12, month);

    //display payments
    cout << fixed << setprecision(2) << endl;
    cout << "Dealer payment: $" << dealerPayment << endl;
    cout << "Loan payment: $" << loanPayment << endl;
    return 0;
}//end of main function    
//function definition
double getPayment(double principal, double monthlyRate, int months)
{
    //calculates and returns a monthly payment
    double monthPay = 0.0;
    monthPay = principal * monthlyRate / (1 - pow(monthlyRate + 1, -months));
    return monthPay;
} //end of getPayment function
