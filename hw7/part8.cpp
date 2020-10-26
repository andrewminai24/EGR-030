#include <iostream>
using namespace std;

const float PI=3.1415927;

/* 
Write three versions of an overloaded function to do the following:

Version 1: Calculates the area of a circle.  This should take one integer as a
parameter which represents the radius.




Version 2: Calculates the area of a square.  This should take one float as a 
parameter which represents the length of the side.

Version 3: Calculates the area of a triangle.  This should take two floats - 
the first is the base and the second is the height.
*/

void CalcArea(int radius) {
    cout << PI * radius * radius << endl;
}

void CalcArea(float side) {
    cout << 4 * side << endl;
}

void CalcArea(float base, float height) {
    cout << base * height << endl;
}


int main()
{
  int radius = 5;
  float side = 4.5;
  float base = 6.0;
  float height = 8.0;
    
  CalcArea(radius);
  CalcArea(side);
  CalcArea(base, height);
}


