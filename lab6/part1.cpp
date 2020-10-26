/*
 function that takes an integer as a parameter and returns a bool if the number is odd.  
 The function could be called isOdd. 
 */


#include <iostream>
using namespace std;
int main(){

    cout << "Enter an integer" << endl;
    int i;
    cin >> i ;
    odd(i);
    return(0);
}
void odd(int a){
     if( a % 2 == 0)
    {
        cout  <<  "even" << endl;
    }
    else
        cout << "odd" << endl;


}

