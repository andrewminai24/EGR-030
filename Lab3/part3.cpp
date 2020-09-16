#include <iostream>
using namespace std;

int main()
{
  int total=0;  // This will accumulate the total.
  int counter=0;  // This will accumulate the number of numbers entered.
  int num=0;  // This will temporarily store the number entered by the user.
  float average; // This will store the average.
  
  // Similar to the HW, this will continue until a negative number is entered.
  // You haven't learned the while statement yet - this is a preview.
  while (num >= 0)
  {
    cout << "Please enter a number.\n";
    cin >> num;
    
    if (num > 0)
    {
    // Include a statement here that adds num to total and stores the new sum in total.

    total += num;
    // Include a statement here that increments the counter by one.
    counter++;
    
    }
  }
  
  // Include a statement here that calculates the average. 
   average = static_cast<float>(total) / counter;

  if (counter > 0)
    cout << "The average is: " << average;
  else
    cout << "No valid numbers were entered, so the average cannot be calculated." << endl;
};



