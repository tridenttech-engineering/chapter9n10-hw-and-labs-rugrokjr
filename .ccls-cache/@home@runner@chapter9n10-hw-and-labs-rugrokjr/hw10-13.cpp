//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype

void getPayment(int,double,int,double&);//adding 4th argument to store result

int main()

{

int carPrice=0;

int rebate=0;

double creditRate=0.0;

double dealerRate=0.0;

int term=0;

double creditPayment=0.0;

double dealerPayment=0.0;

cout<<"Car price (after any trade-in): ";

cin>>carPrice;

cout<<"Rebate: ";

cin>>rebate;

cout<<"Credit union rate: ";

cin>>creditRate;

cout<<"Dealer rate: ";

cin>>dealerRate;

cout<<"Term in years: ";

cin>>term;

//call function to calculate payment

getPayment(carPrice-rebate,creditRate/12,term*12,creditPayment);

getPayment(carPrice,dealerRate/12,term*12,dealerPayment);

//display payment

cout<<fixed<<setprecision(2)<<endl;

cout<<"Credit union payment: $"<<creditPayment<<endl;

cout<<"Dealer payment: $"<<dealerPayment<<endl;

return 0;

}

/**Function definition**/

void getPayment(int prin,double monthRate,int months,double &payment)

{

//calculate and assign a monthly payment to payment variable

double monthPay=0.0;

monthPay=prin*monthRate/(1-pow(monthRate+1, -months));

payment= monthPay;//assigning value of monthPay

}
