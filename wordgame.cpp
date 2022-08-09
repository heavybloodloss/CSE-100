//the purpose of this program is to provide a "wordgame" to the user
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name,
		city,
		age,
		college,
		profession,
		animal,
		petname;

	cout << "Please enter your name." << endl;
	getline(cin, name);
	cout << " " << endl;
	cout << "Please enter the city you grew up in." << endl;
	getline(cin, city);
	cout << " " << endl;
	cout << "Please enter your age." << endl;
	getline(cin, age);
	cout << " " << endl;
	cout << "Please enter your college." << endl;
	getline(cin, college);
	cout << " " << endl;
	cout << "Please enter your profession." << endl;
	getline(cin, profession);
	cout << " " << endl;
	cout << "Please enter what type of animal you have as a pet." << endl;
	getline(cin, animal);
	cout << " " << endl;
	cout << "Please enter your pet's name." << endl;
	getline(cin, petname);
	cout << " " << endl;

	cout << "There once was a person named " << name << " who lived" << endl;
	cout << "in " << city << ".  At the age of " << age << ", " << name << endl;
	cout << "went to a college at " << college << ".  "  << name << " graduated" << endl;
	cout << "and went to work as a " << profession << ".  " << "Then, " << name << endl;
	cout << "adopted a(n) " << animal << " named " << petname << ".  " << endl;
	cout << "They both lived happily ever after." << endl;
	
	system("pause");
	return 0;
}