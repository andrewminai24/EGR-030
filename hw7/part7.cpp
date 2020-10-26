#include <iostream>
using namespace std;

/*
CalcArea is intended to determine the total square footage of hardwood flooring needed to
complete a house with one or more rectangular rooms with the exact same dimensions.

Input Parameters:
float length - The length of the room to be floored.
float width - The width of the room to be floored.
int numRooms - the number of rooms that need to be floored (assume they are all lengthxwidth)
               numRooms should default to 1
float extraArea - any buffer area that the user would like to add to the total area.  This should
                  default to a value of 0.
*/
float CalcArea(float length,float width,int numRooms=1,float extraArea=0)
{
   
    double area;
    area=length*width*numRooms+extraArea;// A place to store the list of arguments



return area ; // Returns the average


}

int main()
{
    cout << CalcArea(9.5,11.0,2,25) << endl;
    cout << CalcArea(8.0,10.5,3) << endl;
    cout << CalcArea(12.0,11.0) << endl;
    
    return 0;
}


