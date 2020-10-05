#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main ()
{
// CONSTANTS
  const string INPUT_FILE_NAME = "spending.txt";
/* These are the three types of spending codes. */
  const int MATERIALS_CODE = 1;
  const int LABOR_CODE = 2;
  const int OVERHEAD_CODE = 3;

// Variables
  int spendingCode;		// Capture the spending codes.
  float unitCost;		// Capture the unit cost.
  int numItems;			// Capture the number of items.
  float totMaterials = 0.0;	// The cumulative total of the materials costs.
  float totLabor = 0.0;		// The cumulative total of the labor costs.
  float totOverhead = 0.0;	// The cumulative total of the overhead costs.

  ifstream inputFile;		// file stream for my input file.

// TASK 1: Open the file and, if it can't open, display "File could not open"
  inputFile.open ("spending.txt");	//opening the file

  if (!inputFile.is_open ())
    {				//checkig that it is oepn or not
      cout << "File did not open error " << endl;	//showing the message that file could not open
      exit (1);			//exit
    }

// TASK 2: Read from the file - in a while loop. Like cin, this puts the next three things
// that are read from the file into the three variables: spendingCode, unitCost, numItems.
  while (inputFile >> spendingCode >> unitCost >> numItems)
    {


// TASK3: Write a switch statement that determines which of the three cumulative
// totals should collect the amount from the current line. Then, accumulate the
// value in the correct variable

      switch (spendingCode)
	{
	case 1:		//if that is case 1 means materials spending code
	  totMaterials = totMaterials + (unitCost * numItems);
	  break;
	case 2:		//if that is case 2 means labor spending code
	  totLabor = totLabor + (unitCost * numItems);
	  break;
	case 3:		//if that is case 3 means overhead spending code
	  totOverhead = totOverhead + (unitCost * numItems);
	  break;
	}


    }

// Display the final output
  cout <<"The following totals have been determined from your spending file.\n";
  cout << fixed << setprecision (2);
  cout << "Materials: \t$" << setw (8) << right << totMaterials << endl;
  cout << "Labor: \t\t$" << setw (8) << right << totLabor << endl;
  cout << "Overhead: \t$" << setw (8) << right << totOverhead << endl;
  cout << "Total: \t\t$" << setw (8) << right << totMaterials + totLabor +
    totOverhead << endl;

  return 0;
}

