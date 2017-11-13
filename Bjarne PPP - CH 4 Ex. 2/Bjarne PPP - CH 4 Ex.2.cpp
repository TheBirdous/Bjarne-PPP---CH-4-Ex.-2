#include "../../std_lib_facilities.h";

int main()
{
	vector <double> temps;

	for (double temp; cin >> temp;)
		temps.push_back(temp);

	keep_window_open();

	sort(temps);

	double even_median = (temps[(temps.size() - 1 ) / 2] + temps[(temps.size() / 2)]) / 2;
	double odd_median = temps[temps.size() / 2 + 1];

	if (temps.size() % 2 == 0)
	{
		cout << "The median of this vector is: " << even_median << '\n';
	}
	else
	{
		cout << "The median of this vector is: " << odd_median << '\n';
	}
	
	
	keep_window_open();
}





