//first include the library
#include <iostream>
using namespace std;

//main function
int main()
{
float lc, lm ,lk;
//enter lenth in centimetre
cout << "enter lenth in centimetre" <<"\n";
//store the value in lc
cin >> lc ;
//convert centimetre into metre and kilometre
lm = (lc/100);
lk = (lc/100000);
//print in the terminal
cout << "lenth in metre" << lm <<"\n";
cout << "lenth in kilometre" << lk <<"\n";
return 0;
}
