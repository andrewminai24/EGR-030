#include <iostream>

#include <iomanip>

using namespace std;

// GLOBAL CONSTANTS

const float TAX_RATE = 0.09;

/*

Function Name: CalculateTip
Description: This function will calculate the tax and tip based on the initial price and
the service provided.
If service was below average, a 10% tip will be incorporated.
If service was average, a 15% tip will be incorporated.
If service was above average, a 20% tip will be incorporated.
Tax and Tip should both be calculated on the pretax amount.
Input Parameters:
float pretaxPrice: The cost of the meal.
int service: An integer that represents the type of service: 1 for below average, 2 for average, and
3 for above average.

Output:

The adjusted price with tip included.

*/

float CalculateTaxAndTip (float pretaxPrice, float &costPlusTax, int service = 2)
{

  float tax;			// Stores the charged tax.

  float tip;			// Stores the calculated tip.

  float finalPrice;		// Stores the final price after tax and tip.

  const float LOW_TIP = 0.1;	// The percentage tip for below average service.

  const float MID_TIP = 0.15;	// The percentage tip for average service.

  const float HIGH_TIP = 0.2;	// The percentage tip for above average service.

  // Calculate the tax.

  tax = pretaxPrice * TAX_RATE;

  // Determine the tip based on the service.

  switch (service)

    {

    case 1:

      tip = pretaxPrice * LOW_TIP;

      break;

    case 2:

      tip = pretaxPrice * MID_TIP;

      break;

    case 3:

      tip = pretaxPrice * HIGH_TIP;

      break;

    }

  costPlusTax = pretaxPrice + tax;

  // The final price should include the original cost, the tax, and the tip.

  finalPrice = pretaxPrice + tax + tip;

  return (finalPrice);

}

int main ()
{

  float initCost;		// Receive the initial price from the user.

  int service;			// Receive the service indicator from the user.

  float newCost;		// Store the new cost after tax and tip.

  float costPlusTax;

  // Ask the user for the initial cost.

  cout << "Please enter the pre tax cost of your meal.\n$";

  cin >> initCost;

  // Ask the user about the service.

  cout <<
    "Was the service below average (1), average (2), or above average (3)?\n";

  cin >> service;

  // Call CalculateTaxAndTip to determine the updated cost.

  newCost = CalculateTaxAndTip (initCost, costPlusTax, service);

  // Output the result.

  cout << fixed << setprecision (2);

  cout << "The amount after tax and tip is: $" << newCost << endl;

  cout << "The amount without the tip is: $" << costPlusTax << endl;

}

