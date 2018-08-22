//first include the library
#include <iostream>
using namespace std;

//main function
int main()
{
// declare the variables
float c ,f;
// enter temperature in celsius
cout << "enter celcius in temperature" <<"\n";
// store the value in c
cin >> c;
//convert celsius into fahrenheit
f = (c*9/5)+32;
//print in the terminal
cout << "temperture in fahernheit" << f << endl;
 return 0;
}
