//If...Else:

//WAP in c++ to accept three angles from user of triangle and check whether it is a valid triangle or not.

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter three angles of triangle: \n";
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a + b + c) == 180)
	{
		cout << "Triangle is valid.";
	}
	else
	{
		cout << "Triangle is not valid.";
	}
    return 0;
}
