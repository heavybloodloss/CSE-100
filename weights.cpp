#include<iostream>
using namespace std;
int main()
{
	//This program is used to determine the ideal weight of 
	//males and females based on height
	//assumes all users are 5ft and taller
	
	double Feet, Inches, wMale, wFemale;
	cout<<"User must be 5ft or taller to use this program" << endl;
	cout<<"Please enter your height in feet then inches" << endl;
	cout<<"Feet" << endl;
	cin>>Feet;
	cout<<"Inches" << endl;
	cin>>Inches;
	
	//calculates ideal weight from given heights
		wFemale = 100 + (5 * (12 * (Feet - 5) + (Inches)));
		wMale = 106 + (6 * (12 * (Feet - 5) + (Inches)));

	//displays the ideal weights
	cout<< "The ideal weight for a male is "<<wMale<<" lbs"<< endl;
	cout<< "The ideal weight for a female is "<<wFemale<<" lbs"<< endl;
	system("pause");
	return 0;
}
