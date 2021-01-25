/*
Jessica Viner
2345566
viner@chapman.edu
CPSC 298 - 07
Programming Assignment 1: The Basics
firecapacity.cpp
*/


#include <iostream>

using namespace std;

int main(){

  int maxCap;
  int numPeople;

  cout << "Maximum room capacity: ";
  cin >> maxCap;
  cout << endl;

  cout << "Number of people to attend: ";
  cin >> numPeople;
  cout << endl;

  if(numPeople <= maxCap){
    cout << "It is legal to hold the meeting. " << endl;
    cout << (maxCap - numPeople) << " more people can attend." << endl;
  }else{
    cout << "Meeting cannot be held as planned. " << endl;
    cout << numPeople - maxCap;
    cout << " people must be excluded in order to meet regulations." << endl;
  }


  return 0;
}
