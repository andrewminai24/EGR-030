#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float num1, num2, num3, num4, num5, num6;
  num1 = 12.42325;
  num2 = 11.0;
  num3 = 1252.2131;
  num4 = 652.3;
  num5 = 1.1;
  num6 = 1.3;
  
  cout << setprecision(2) << fixed;
  cout << setw(9) <<"List 1"  << setw(9) << "list2" << endl;
  cout << setw(9) << num1 << setw(9)<< num2 << endl;
  cout << setw(9) << num3 << setw(9)<< num4 << endl;
  cout << setw(9) << num5 << setw(9)<< num6 << endl;
  
}




