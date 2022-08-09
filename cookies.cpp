//this program is used to determine calories consumed
#include<iostream>
using namespace std;

int main()
{
	//define values
   const double CAL_PER_SERVING=300, COOKIES_PER_SERVING=4;
   int cookies;
   double caloriesConsumed;
   cout << "The purpose of this program is to determine calories consumed." << endl;
   cout << " " << endl;
  
   //request data from user 
   cout<<"How many cookies did you eat? " << endl;
   cin>>cookies;
   cout << " " << endl;
  
   if (cookies > 0) {
	caloriesConsumed = (cookies/COOKIES_PER_SERVING )*CAL_PER_SERVING;

   cout<<"Calories Consumed = " << caloriesConsumed << endl;
   }
   else {
	   cout << "Are you sure you didn't eat any delicious cookies?" << endl;
   }
	system("pause");
   return 0;
}