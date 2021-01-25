/*
Jessica Viner
2345566
viner@chapman.edu
CPSC 298 - 07
Programming Assignment 1: The Basics
cereal.cpp
*/

#include <iostream>

using namespace std;

int main(){

  float weightOz;
  float weightTons;
  float numBoxes;

  cout << "Weight of package (in ounces): " << endl;
  cin >> weightOz;
  cout << endl;

  weightTons = weightOz/35273.92;

  cout << "That is " << weightTons <<" metric tons of cereal." << endl;

  numBoxes = 1/weightTons;

  cout << numBoxes << " boxes are needed to yeild one metric ton of cereal." << endl;



  return 0;
}
