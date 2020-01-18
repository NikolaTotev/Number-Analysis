#include <iostream>
using  namespace  std;

void print(double x1, double x2)
{
	cout << "The answers are: " << endl;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}
void print(float x1, float x2)
{
	cout << "The answers are: " << endl;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}
int main()
{
	bool useDouble = true;
	cout << "Select what type to use." << endl;
	cout << "F - to use float" << endl;
	cout << "D - to use double" << endl;

	char input;
	cin >> input;

	if (input == 'D' || input == 'd')
	{

		double a = 1;
		double b = 3000.001;
		double c = 3;
		double discriminant = (b * b - 4 * a * c);
		double x1 = (-b + sqrt(discriminant)) / 2 * a;
		double x2 = (-b - sqrt(discriminant)) / 2 * a;
		print(x1, x2);
	}
	else if (input == 'F' || input == 'f')
	{

		float a = 1;
		float b = 3000.001;
		float c = 3;
		float discriminant = (b * b - 4 * a * c);
		float x1 = (-b + sqrt(discriminant)) / 2 * a;
		float x2 = (-b - sqrt(discriminant)) / 2 * a;
		print(x1, x2);
	}
	else
	{
		cout << "Invalid input!";
		return 0;
	}
}
