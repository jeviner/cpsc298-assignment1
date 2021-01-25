/*
Jessica Viner
2345566
viner@chapman.edu
CPSC 298 - 07
Programming Assignment 1: The Basics
employeepay.cpp
*/

#include <iostream>

using namespace std;

int main(){

  //pay rates
  const float regRate = 16.0;
  const float overRate = 1.5 * regRate; // overtime rate

  //withheld values and taxes
  const float ssTax = 0.06;
  const float fedIncTax = 0.14;
  const float stateIncTax = 0.05;

  const float medInsuranceWH = 10.0;

  //input value
  int hoursWorked;

  //output values:
  //tax withholdings
  float ssTaxWH;
  float fedIncTaxWH;
  float stateIncTaxWH;

  //gross and net take-home pay
  float grossPay;
  float netPay;

  cout << "Hours worked in given week: ";
  cin >> hoursWorked;
  cout << endl;

  if(hoursWorked <= 40){
    grossPay = regRate * hoursWorked;
  }else{
    grossPay = regRate * 40;
    grossPay = grossPay + ((hoursWorked - 40) * overRate);
  }

  cout << "Gross pay for the week: $"<< grossPay << endl << endl;

  //calculations for the tax withholding
  ssTaxWH = grossPay * ssTax;
  fedIncTaxWH = grossPay * fedIncTax;
  stateIncTaxWH = grossPay * stateIncTax;

  cout << "Witholdings: " << endl;
  cout << "Social Security Tax: $" << ssTaxWH << endl;
  cout << "Federal Income Tax: $" << fedIncTaxWH << endl;
  cout << "State Income Tax: $" << stateIncTaxWH << endl;
  cout << "Medical Insurance: $" << medInsuranceWH << endl;

  netPay = grossPay - ssTaxWH - fedIncTaxWH - stateIncTaxWH - medInsuranceWH;

  cout << endl << "Net take-home pay: $" << netPay << endl;


  return 0;
}
