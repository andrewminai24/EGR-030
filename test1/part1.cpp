#include <iostream>

using namespace std;

int main ()
{
  int l = 4;
  for (int i = 1; i <= l; i++)
    {
      for (int j = 0; j < l - i; j++)
	{
	  cout << " ";
	}
      for (int j = 2 * i - 1; j >= 1; j -= 2)
	{
	  cout << j;
	}
      cout << "\n";
    }
  return (0);
}