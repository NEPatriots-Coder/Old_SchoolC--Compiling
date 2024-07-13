#include <iostream>
using namespace std;

int main(void)
{
	double testscore1, testscore2, testscore3;

	cout << "Enter your test scores: ";
	cin >> testscore1 >> testscore2 >> testscore3;

	if (testscore1 > 75){
		cout << "You passed the first test" << endl;
	} else {
		cout << "You failed the first test" << endl;}

	if (testscore2 > 75){
		cout << "You passed the second test" << endl;
	} else {
		cout << "You failed the second test" << endl;}

	if (testscore3 > 75){
		cout << "You passed the third test" << endl;
	} else {
		cout << "You failed the third test" << endl;}

	return 0;



}
