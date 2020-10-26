#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/* 
This calculates the discount offered with the following rules:
- the first 5 people to use the coupon gets 50% off
- the next 5 people to use the coupon gets 25% off
- everyone after that gets 10% off

Input parameters:
origPrice - a float that represents the price before the discount

Output parameters:
Returns a float that represents the price after the discount
*/
float
discount (float origPrice)
{

  float newPrice = 0;

  static int people = 0;	// static variable to track the people number



  /* Your job is to fill this function with all of the necessary code to make this work as

     described in the comments above. */



  if (people < 5)
    {

      newPrice = origPrice * 0.5;	// first 5 people get 50% off

    }
  else if (people < 10)
    {

      newPrice = origPrice * 0.75;	// next 5 people get 25% off

    }
  else
    {

      newPrice = origPrice * 0.90;	// remaining people get 10% off

    }

  people += 1;

  return (newPrice);

}

int main ()
{
  ifstream infile;
  float tempPrice;
  float salePrice;

  infile.open ("prices.txt");

  if (!infile)
    {
      cout << "Couldn't open file.\n";
      return 0;
    }

  cout << fixed << setprecision (2);

  while (infile >> tempPrice)
    {
      salePrice = discount (tempPrice);
      cout << "The initial price is: $" << tempPrice <<
	" and the discounted price is: $" << salePrice << endl;
    }

  return 0;
}
