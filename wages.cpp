//determining the wage based from hours and rate
#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << "The number of hours worked?"<<endl;
	int hours;
	cin >> hours;
	cout << "What is the rate?" << endl;
	double rate;
	cin >> rate;
	double wage = hours*rate;
	cout << "Your wage is $"<< wage << endl;
	system("pause");


	return 0;
}