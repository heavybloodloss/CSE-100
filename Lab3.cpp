#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
	//defines values
	double shirts, 
		base_price=12,
		discount=0,
		cps,
		total;

	//defines output formatting
	cout << fixed << showpoint << setprecision(2);

	//explains program and asks user for data
	cout << "This program is used to determine cost of shirts purchased." << endl;
	cout << "How many shirts would you like to buy?" << endl;
	cin >> shirts;

	if (shirts >= 0)
	{
		if (shirts > 30)
			discount = .25;
		else if (shirts > 20)
			discount = .2;
		else if (shirts > 10)
			discount = .15;
		else if (shirts > 5)
			discount = .1;

		//calculates total cost
		cps = (base_price)-(base_price*discount);
		total = cps*shirts;

		//displays total cost
		cout << " " << endl;
		cout << "The cost per shirt is $" << cps << " and the total cost: $" << total << endl;

	}
	else
	{
		cout << "The number of shirts must be a positive number." << endl;
		cout << "please run program again and enter a valid number." << endl;
	}

		system("pause");
		return 0;

}