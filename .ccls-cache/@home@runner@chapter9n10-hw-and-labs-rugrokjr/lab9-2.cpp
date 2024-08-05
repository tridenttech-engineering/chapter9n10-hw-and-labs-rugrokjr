//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Kendra Ruggiero> on <7-30-24>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    double carprice = 0.0;
    double tradein = 0.0;
    double interestRate = 0.0;
    double monthlyInterest = 0.0;
    double balance = 0.0;
    int month = 0;
    double loanPayment = 0.0;
    double dealerPayment = 0.0;
    //get user input
    cout << "Enter the car price amount: ";
    cin >> carprice;
    cout << "Enter the trade in amount: ";
    cin >> tradein;
    cout << "Enter the interest rate of the dealer: ";
    cin >> interestRate;
    cout << "Enter the loan interest rate: ";
    cin >> monthlyInterest;
    cout << "Enter the term payment in months: ";
    cin >> month;

    //calculate payments
    dealerPayment = getPayment(carprice - tradein, interestRate * month);
    loanPayment = getPayment(carprice - tradein, monthlyInterest * month);
  

    //display payments
    cout << fixed << setprecision(2) << endl;
    cout << "Dealer payment: $" << dealerPayment << endl;
    cout << "Loan payment: $" << loanPayment << endl;

    return 0;
}//end of main function    