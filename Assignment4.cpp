//program to determine validity of Visa or MasterCard numbers
//program works but poorly, can't figure out how to get int -> array (for loop but I don't know how)
//this makes the user hit enter after every number, very annoying
#include <iostream>
#include <array>
using namespace std;
int main()
{
	//set integers and strings
	const int SIZE = 16;
	int cardtype,
		arrayCC[SIZE],
		ccnum,
		valid,
		sum=0,
		i;
	


	//ask if visa or mastercard
	cout << "Please select the type of Credit Card from the following list." << endl;
	cout << "1.Mastercard" << endl;
	cout << "2.Visa" << endl;
	cin >> cardtype;
	switch (cardtype)
	{
		//ask to enter number
	case 1: cout << "Please enter the 16-digit Credit Card number, no spaces, one digit at a time, to verify Mastercard." << endl;
			cout << "*********************NOTE****************" << endl;
			cout << "MUST HIT ENTER AFTER EVERY NUMBER ENTRY!!" << endl;
			cout << "*********************NOTE****************" << endl;
		//cin >> ccnum;  //enter credit card number in one shot so user doesn't need to hit Enter 16 times
		//arrayCC.fill(ccnum);  //invalid operation, need to find out how to enter int -> array, for loop but I don't know how
		
		//sumation
		for (int i = 0; i < SIZE; i++)
		{
			cin >> arrayCC[i];
			//ccnum[i] = arrayCC[i];  //invalid operation, can't add an integer to an array, need to find out how to enter int -> array, for loop but I don't know how
			sum = sum + arrayCC[i]; 
			
		}
	
		//modulo math % to determine and compare remainder
		valid = sum % 10;
		if (valid == 1)
			cout << "Your Credit Card has been verified as a Master Card." << endl;
		else
		{
			cout << "Your Credit Card is invalid, please re-enter." << endl;
		}break;
		
	case 2: cout << "Please enter the 16-digit Credit Card number, no spaces, one digit at a time, to verify Visa." << endl;
			cout << "*********************NOTE****************" << endl;
			cout << "MUST HIT ENTER AFTER EVERY NUMBER ENTRY!!" << endl;
			cout << "*********************NOTE****************" << endl;
		//cin >> ccnum;  //enter credit card number in one shot so user doesn't need to hit Enter 16 times
		//arrayCC.fill(ccnum);  //invalid operation, can't fill array with int, need to find out how to enter int -> array, for loop but I don't know how
		
		//sumation
		for (int i = 0; i < SIZE; i++)
		{
			cin >> arrayCC[i];
			//ccnum[i] = arrayCC[i];  //invalid operation, can't add an integer to an array, need to find out how to enter int -> array, for loop but I don't know how
			sum = sum + arrayCC[i]; 
		}
		//modulo math % to determine and compare remainder
		valid = sum % 10;
		if (valid == 0)
			cout << "Your Credit Card has been verified as a Visa." << endl;
		else
		{
			cout << "Your Credit Card is invalid, please re-enter." << endl;
		}break;
		
	default: cout << "your entry is invalid, please re-enter." << endl;


	}
	




	system("pause");
	return 0;

}