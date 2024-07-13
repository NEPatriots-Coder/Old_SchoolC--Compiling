// Monthly Loan Payment Calculator


#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{

	double p{0};		// principal-- loan amount
	int years{0};		// number of years on loan
	double apr{0};		// annual percentage rate

	cout << "Please enter the principal loan amount: ";
	cin >> p;

	cout << "Please enter your APR: ";
	cin >> apr;

	cout << "Please enter the number of years on your loan: ";
	cin >> years;

	cout.setf(ios::fixed);
	cout.precision(2);

	int n = years * 12;		//years to periods
	double r = (apr / 100) / 12;	//APR to periodic rate

	double payment = p * r / (1-pow(1 + r, -n)); //periodic payment
	cout << "Your monthly payment over the lifetime of the loan is:$ " << payment << endl;

	return 0;
}


