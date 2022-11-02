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
  for (int i = 0; i < NumCars; i++){
    cin >> cars[i].CarNumber;
    cin >> cars[i].MilesDriven;
    cin >> cars[i].GallonsUsed;
  }

double totalMPG = 0;
for(int i = 0; i < NumCars; i++){
  double mpg = cars[i].MilesDriven / cars[i].GallonsUsed;
  totalMPG += mpg;

  
}
  
}



