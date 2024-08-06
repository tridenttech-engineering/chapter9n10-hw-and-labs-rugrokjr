//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Kendra Ruggiero> 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Function prototype
double getPayment(int,double,int);


using namespace std;

int main()
{
int carPrice=0;
int rebate=0;
double creditRate=0.0;
double dealerRate=0.0;
int term=0;
double creditPayment=0.0;
double dealerPayment=0.0;
int months=0;

cout<<"Car price (after any trade-in):";
cin>>carPrice;
cout<<"Rebate";
cin>>rebate;
cout<<"Credit Union Rate: ";
cin>>creditRate;
cout<<"Daeler Rate:";
cin>>dealerRate;
cout<<"Term in months:";
cin>>term;
cout<<"enter months for terms:";
cin>>months;

if(months==0)
{

return -1;

}

else
{
creditPayment=getPayment((carPrice-rebate),creditRate/months,term*months);
dealerPayment=getPayment(carPrice,dealerRate/months,term*months);


cout<<fixed<<setprecision(2)<<endl;
cout<<"Credit union payment:$" <<creditPayment<<endl;

cout<<"Dealer payment:$" <<dealerPayment<<endl;
}

return 0;
}


double getPayment(int price ,double creditrate,int term)

{
return price+creditrate+term;

}