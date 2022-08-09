// grade calculator
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	//assigning integers
	char letter;
	double num;

	//explanation of program to user
	cout << "The purpose of this program is to display your letter grade." << endl;
	cout << "" << endl;
	cout << "" << endl;

	//requests data from user
	cout << "Please enter your number grade in the range" << endl;
	cout << "of 0-100" << endl;
	cin >> num;
	
	//determinies if a valid number is entered
	if (num >= 0 && num <= 100 ) {

		//determines letter grade
		if (num >= 90 && num <= 100) {
			letter = 'A';
		}
		else if (num >= 80 && num < 90) {
			letter = 'B';
		}
		else if (num >= 70 && num < 80) {
			letter = 'C';
		}
		else if (num >= 60 && num < 70) {
			letter = 'D';
		}
		else if (num >= 0 && num < 60) {
			letter = 'E';
		}
		cout << "Your letter grade is: " << letter << endl;
		cout << "" << endl;
		}
	else {
		//description of improper inputs
		if (num < 0 || num > 100) {
			cout << "" << endl;
			cout << "Grade range must be within 0-100." << endl;
			cout << "" << endl;
		}
						cout << "" << endl;
		cout << "There was a problem with your" << endl;
		cout << " input, please run program again." << endl;
		cout << "" << endl;
	}

	system("pause");
	return 0;

}