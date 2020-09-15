#include <iostream>
using namespace std;

int main()
{
 //short int numTB = 3;  // This represents the number of terabytes in a hard drive.
 long numTB=3;
  // There are 1,000 GigaBytes per 1 Terabyte.
  // There are 1,000 MegaBytes per 1 GigaByte.
  // There are 1,000 KiloBytes per 1 MegaByte.

  // To convert terabytes to kilobytes, we need to multiply numTB by 1,000,000,000.
  
  cout << "There are " << numTB*1000000000 << " kB in ";
  cout << numTB << " terabytes.\n";
  
  // As is, this code doesn't work.  In fact, it gives a negative number.
  // Review the lecture slides and determine what needs to be done to the
  // literal, 1000000000, that is used above to expand the limit - i.e. to
  // force the compiler to treat it as a longer int.
  
  // Adjust the above code to have it print the correct result.
  // While it is tempting to change the data type for numTB, resist that urge and find another way.
  // The logical reason to avoid that is because short int is the appropriate type for numTB.
  
}




