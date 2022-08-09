// tax bracket based on income
#include <iostream>
#include <string>
using namespace std;
int main()
{
	double income,
		tax;
	string name;
	cout << "Please enter name and annual Income in dollars." << endl;
	cout << "Name:";
	getline(cin, name);
	cout << "Income:";
	cin >> income;
	//need to add spacing to look better
	cout << name << ":Tax Report" << endl;
	cout << "================" << endl;
	if (income > 50000) {
		tax = 0.38;
	}
	else {
		tax = 0.3;
	}
	cout << "Income=" << income << endl;
	cout << "Taxes=" << income*tax << endl;





	system("pause");
		return 0;
}