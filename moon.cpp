//this program i sto determine user's wieght on the moon
#include<iostream>
using namespace std;

int main()
{

	//define values
	double weightonearth,
		weightonmoon;
	cout << "The purpose of this program is to display how" << endl;
	cout << "you weigh on the moon." << endl;
	cout << " " << endl;
	cout << "How much do you weigh in lbs on Earth? "<< endl;
	cin >> weightonearth;
	cout << " " << endl;

	weightonmoon = weightonearth*(0.167);

	cout << "Your weight on the Moon = " << weightonmoon << "lbs" << endl;
	system("pause");
	return 0;
}