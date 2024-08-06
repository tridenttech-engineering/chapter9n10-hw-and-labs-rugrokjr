//Lab10-2.cpp - displays total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables to store user input and calculated values
    int number_of_windows;
    char bogo = 'N';  // Variable to store BOGO offer choice
    float price_per_window, total_owed;

    // Taking input from the user
    cout << "\nEnter Number of Windows : ";
    cin >> number_of_windows;
    cout << "\nEnter Price of Window : ";
    cin >> price_per_window;
    cout << "\nBOGO Offer (Enter Y for Yes and N for No) : ";
    cin >> bogo;

    // Applying BOGO offer if chosen by the user
    if (bogo == 'Y')
        number_of_windows = (number_of_windows + 1) / 2;  // Considering half Quantity for Buy one Get one Offer

    // Calculation of Total Amount Owed
    total_owed = number_of_windows * price_per_window;

    // Printing the results
    cout << "\nTotal Owed : $" << total_owed << endl;

    return 0;
} //end of main function