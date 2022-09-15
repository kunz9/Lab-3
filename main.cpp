#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Enter 4 values into the data set:\n";
	//cin >> n; cin.ignore();
	n = 4;

		double sum = 0;

		for (int i = 0; i < n; i++)
		{
			double x;
			cout << "Enter the value #" << i + 1 << ":";
			//cout << ":";
			cin >> x; cin.ignore();

			sum += x;
		}
		double mean = double(sum) / n;

		cout << "Mean = " << mean << '\n';

	return 0;
}