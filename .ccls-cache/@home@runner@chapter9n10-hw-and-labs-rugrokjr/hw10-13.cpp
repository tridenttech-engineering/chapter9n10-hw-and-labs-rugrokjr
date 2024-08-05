//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype
double getPayment(int, double, int);

int main()
{
    //declare variables
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;
    char another = 'Y';
    while (toupper(another)== 'Y')
    {
        cout << "Enter the car price after any trade-in value: ";
        cin >> carPrice;
        cout << "Rebate: ";
        cin >> rebate;
        cout << "Credit union rate: ";
        cin >> creditRate;
        cout << "Dealer rate: ";
        cin >> dealerRate;
        cout << "Term in years: ";
        cin >> term;
        if (creditRate >= 1)
            creditRate /= 100;
        // end if


        //call function to calculate payments
        creditPayment = getPayment(carPrice - rebate,
            creditRate / 12, term * 12);
        dealerPayment = getPayment(carPrice, 
             dealerRate / 12, term * 12);    //assign values to calculate payments

        //display payments
        cout << fixed << setprecision(2) << endl; 
        cout << "Credit union payment: $" 
            << creditPayment << endl;
        cout << "Dealer payment: $"
            << dealerPayment << endl;

        if (creditPayment < dealerPayment)
            cout << "You should finance through the credit union.";
        else if (creditPayment > dealerPayment)
            cout << "You should finance through the dealer.";
        else 
            cout << "You can finance through either.";
        // end if
        cout << endl;

        cout << "Another (Y/N)? ";
         cin >> another;
        another = toupper(another);
    } // end while
    return 0;
}//end of main function    

    //*****function definitions*****
double getPayment(int prin,
                  double monthRate, 
                  int months)
{
    //calculates and returns a monthly payment
    double monthPay = 0.0;
    monthPay = prin * monthRate / 
        (1 - pow(monthRate + 1, -months));
    return monthPay;
} //end of getPayment function//*****function definition*****
