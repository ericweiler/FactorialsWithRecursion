#include <iostream>

using namespace std;

double factorial(double factor){
	double result;
	if (factor == 1)
		return 1;
	result = factor*factorial(factor - 1);
	return result;
}

int main(){
	while (true)
	{
		double factor;
		cout << "Enter a factorial: " << endl;
		cin >> factor;
		cout << factorial(factor) << endl;
	}
}