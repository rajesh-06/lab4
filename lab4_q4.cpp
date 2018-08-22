//first include the library
#include <iostream>
#include <math.h>
using namespace std;

//main function
int main()
{
// declare the variables
float a, s;  
// enter the lenth of the side of an equilateral triangle
cout << "enter the lenth of the side of an equilateral triangle" << endl;
//store the variables
cin >> s;
// calculate its area
a = pow(3,0.5)/4*s*s; 
// print area in terminal
cout << "area of the triangle is" << a ;
return 0;
}
