#include<iostream>
using namespace std;
int main(void){
int count = 2;
int total = 0;
for(int count = 2; count < 7;count++){
    total = total + count;
    count++;
}
cout << count << endl;
return(0);
}