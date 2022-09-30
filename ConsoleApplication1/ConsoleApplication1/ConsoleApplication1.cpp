#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::ceil;
int main()
{
	int i = 0;
	float reading[5];
	char signalPattern[5];
	for (i = 1; i < 6; i++)
	{
		cout << "What's your reading? ";
		cin >> reading[i];
		if (reading[i] < 0.00 || reading[i] > 100.00)
		{
			do {
				cout << "Value Not Valid Try again ";
				cin >> reading[i];
				reading[i] = ceil(reading[i] * 100.0) / 100.0;
			} while (reading[i] < 0.00 || reading[i] > 100.00);
		}
		reading[i] = ceil(reading[i] * 100.0) / 100.0;
		if (reading[i] > 80)
		{
			signalPattern[i] = 'S';
		}
		else if (reading[i] < 30)
		{
			signalPattern[i] = 'P';
		}
		else
		{
			signalPattern[i] = 'M';
		}
	}
	string finalPattern = signalPattern;
	cout << "Signal Pattern is " << finalPattern << endl;
	for (int k = 1; k < 6; k++) 
	{
		cout << "Reading " << k << " - " << reading[k] << endl;
	}
}