#include "../../std_lib_facilities.h";

int main()
{
	vector <double> temps;

	for (double temp; cin >> temp;)
		temps.push_back(temp);

	keep_window_open();

	sort(temps);
	double median = (temps[0] + temps[temps.size() - 1]) / 2;
	cout << "The median of this vector is: " << median << '\n';

	keep_window_open();
}





