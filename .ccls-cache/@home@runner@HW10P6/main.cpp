#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct car{
int CarNumber;
int MilesDriven;
int GallonsUsed;
}; 

int main() {
  const int NumCars = 5;
  car cars[NumCars];
      cout << "Enter car number, miles driven, and gallons used. Each separated by a space and new line after entering each gallon amount." << endl;
  for (int i = 0; i < NumCars; i++){
    cin >> cars[i].CarNumber;
    cin >> cars[i].MilesDriven;
    cin >> cars[i].GallonsUsed;
  }

double totalMPG = 0;
for(int i = 0; i < NumCars; i++){
  double mpg = cars[i].MilesDriven / cars[i].GallonsUsed;
  totalMPG += mpg;
  cout << "Car number " << cars[i].CarNumber << " used " << mpg << " miles per gallon." << endl;
}
cout << "Average mpg for all cars: " << totalMPG << endl;

  return 0;
}

