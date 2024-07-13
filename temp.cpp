#include <iostream>
using namespace std;

int main(void)
{
	double ctemp, ftemp;

	cout << "Enter your temperature in Celsius and press Enter: ";
	cin >> ctemp;

	ftemp = (ctemp * 1.8) + 32;

	cout <<"Your Celsius converted to Fahrenheit is: " << ftemp << endl;

	return (0);




}
