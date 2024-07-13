#include <iostream>
using namespace std;

int main(void)
{
	const double COMM_RATE = 0.1;
	double sales{0};
	double commission{0};

	cout << "Enter the sales ammount: ";
	cin >> sales;

	commission = sales * COMM_RATE;	

	if (sales < 20000) {
		cout << "Try a little harder next month" << endl;
	}

	else if (sales > 30000) {
		cout << "Fantastic job and keep up the work" << endl;
	}

	cout << "Your sales were $" << sales <<
		" and your commission is $" << commission << endl;
	return 0;
}
