#include <iostream>
using namespace std;



int main(void){
cout << 5.3 * 3 << endl;
cout << static_cast<int>(5.3) * 3 << endl;
float answer;
answer = 'r' * 3.3;
cout << answer << endl;
int answer2;
answer2 = 'r' * 3.3;
cout << answer2 << endl;
cout << static_cast<float>(answer2) << endl;
return(0);
}