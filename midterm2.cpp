#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
int y;
int main()
{
	string str;

	int digitCount = 0;

	int i = 0;

	getline(cin, str);

	while (i <= str.length())

	{

		i++;

		if (str[i] >= '0' && str[i] <= '9')
			digitCount++;

	}
	cout << digitCount << " " << endl;
	
	system("pause");
	return 0;

}