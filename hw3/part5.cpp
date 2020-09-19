#include<iostream>
 using namespace std;
  
 int main(){
     float x = 5.3;
     x= static_cast<int>(x) % 2;
    cout << x << endl;
