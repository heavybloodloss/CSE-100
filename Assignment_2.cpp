// shipping rate calculator
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//assigning integers and doubles
	int y = 500;

	double range,
		miles,
		weight,
		rate,
		totalcost;
	
	//explenation of program to user
	cout << "The prupose of this program is to calculate shipping cost" << endl;
	cout << "based on distance and weight." << endl;
	cout << "" << endl;

	//requests data from user
	cout << "Please enter the shipping distance in miles." << endl;
	cin >> miles;
	cout << "Please enter the shipping weight in lbs." << endl;
	cin >> weight;
			
		if ((miles > 10 && miles<3000) && (weight > 0 && weight <= 20)) {
		
		//determines shipping rate
		if (weight > 0 && weight <= 2) {
			rate = 1.10;
		}
		else if (weight > 2 && weight <= 6) {
			rate = 2.20;
		}
		else if (weight > 6 && weight <= 10) {
			rate = 3.70;
		}
		else if(weight > 10 && weight <= 20) {
			rate = 4.80;
		}
		
		//determine shipping multiplier
		range = ceil(static_cast<double>(miles) / y);

		totalcost = rate*range;
		cout << "" << endl;
		cout << "Total cost of shipping is : $ " << std::setprecision(2) << fixed << totalcost << endl;
	}
	else {
		//description of improper inputs
		if (miles < 10 || miles>3000) {
			cout << "" << endl;
			cout << "Shipping distance is a minimum of 10 miles" << endl;
			cout << "and a maximum of 3000 miles." << endl;
			cout << "" << endl;
		}
		if (weight <= 0) {
			cout << "Weight should be greater than 0." << endl;
		}
		else if (weight > 20) {
			cout << "Maximum weight is 20 lbs." << endl;
		}
		cout << "" << endl;
		cout << "There was a problem with one or more of your" << endl;
		cout << " inputs, please run program again." << endl;
		cout << "" << endl;
	}
	
		system("pause");
		return 0;

}