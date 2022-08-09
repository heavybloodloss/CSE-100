#include<iostream>
using namespace std;
int main()
{										//defining array size
	const int SIZE = 10;
										//defining answer keys for upper and lower case B,D,A,A,C,A,B,A,C,D
	char answerkey1[SIZE] = { 'B','D','A','A','C','A','B','A','C','D' },
		answerkey2[SIZE] = { 'b','d','a','a','c','a','b','a','c','d' },
		user[SIZE];						//defining integers
		int matchingCount = 0,
			invalidCount=0;

		cout << "This program is to grade your exam and give pass or fail response." << endl;
		cout << "Note: only letters A,B,C,D,a,b,c,d are acceptable answers." << endl;

	for (int i = 0; i < SIZE; i++)
	{	//asks user for inputs into user array
		cout << "" << endl;
		cout << "Enter your answer for question number " << i + 1 << ":";
		cin >> user[i];


		//while loop to define invalid inputs
		while (user[i] != 'A' && user[i] != 'B' &&user[i] != 'C' &&user[i] != 'D' &&user[i] != 'a' &&user[i] != 'b' &&user[i] != 'c' &&user[i] != 'd')
		{

			//adding to counter while invlid condition exists and giving another chance to enter proper answer
			invalidCount++;

			//counter adding invalid entries to terminate program
			if (invalidCount >= 3)
			{
				cout << "GOOD BYE" << endl;
				system("pause");
				return 0;
			}
			cout << "----------------------------------------------------" << endl;
			cout << "Only letters A,B,C,D,a,b,c,d are acceptable answers." << endl;
			cout << "" << endl;
			cout << "Enter your answer for question number " << i + 1 << ":";
			cin >> user[i];
			cin.ignore(100, '\n');

		}
		//resetting invalid counter once out of while loop 
		invalidCount = 0;				
	
		}
		cout << "" << endl;

	for (int i = 0; i < SIZE; i++)
	{	//compares upper and lower case answer keys
		if (answerkey1[i] == user[i] || answerkey2[i] == user[i])
			matchingCount++;
	}
	//displays message for passing grade
	if (matchingCount >= 8)            
	{
		cout << "You have passed the exam" << endl;
		cout << "Total number of correct answers: <" << matchingCount << ">" << endl;
		cout << "Total number of correct answers: <" << 10 - matchingCount << ">" << endl;
	}
	//displays message for failing grade
	else							   
	{
		cout << "Sorry, you have not passed the exam!" << endl;
		cout << "Total number of correct answers: <" << matchingCount << ">" << endl;
		cout << "Total number of correct answers: <" << 10 - matchingCount << ">" << endl;
	}

	system("pause");
	return 0;

	}