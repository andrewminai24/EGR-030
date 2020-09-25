/*
Have the user enter their first name and their last name.
Store each separately. Then, use the + operator that strings allow to combine the first
name, a space, and the last name into one string. Display the full name and display how
many total characters the name is (including the space). Remember, getline() is the
preferred function to receive strings from the user. The length function can also be
helpful in determining the length. Sample output is below
*/

#include <iostream>
#include <string>
using namespace std;

string firstname,lastname;

int main(void){

    cout <<"Enter your first name" << endl;
    getline(cin,firstname);
    cout << "Enter your last name" << endl;
    getline(cin,lastname);

    string cat = firstname + " " + lastname;
    int size =  cat.length();

    cout << cat << endl;
    cout << "Your name has " << cat.length() << "characters" << endl;

    return(0);
}
