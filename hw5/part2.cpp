#include<iostream>
using namespace std;
int main()
{
   int a,b;
   a=10;
   b=5;
   cout << a++ << endl;
   cout << a << endl;
   cout << ++a << endl;
   cout << a << endl;
   cout << ++a + ++b << endl;
   cout << a++ + b++ << endl;
   cout << a << endl;
   cout << b << endl;
   return(0);
}

