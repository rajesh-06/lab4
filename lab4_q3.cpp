//first include the library
#include <iostream>
using namespace std;

//main function
int main()
{
// declare the variables
int d, w, y;
//enter number of days 
cout <<"enter number of days" << endl;
//store the variable in d
cin >> d;
//convert it into years and weeks and days
y = d/365;
d = d%365;
w = d/7;
d = d%7;
// print in the terminal
cout << "number of years" << y <<endl;
cout << "number of weaks" << w << endl;
cout << "number of days" << d ;
return 0;
}
