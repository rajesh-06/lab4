//first include the library
#include <iostream>
using namespace std;

//main function
int main()
{
// declare the variables
float b, h, a;
//enter the lenth of the base of the triangle
cout << "lenth of the base of the triangle" << endl;
//store the lenth of base of the triangle
cin >> b;
//enter the lenth of height of the triangle
cout << "lenth of the height of the triangle" << endl;
//store the lenth of the height of triangle
cin >> h;
//calculate the area of the triangle
a = 0.5*b*h;
//print the area in the terminal
cout << "area of the triangle is:" << a << endl;
return 0;
}
