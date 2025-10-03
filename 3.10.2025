#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, c, b, d, h, x = 0, y = 0, x0, y0;
	cout << "enter a, x0, y0, c, b, d, h\n";
	cin >> a >> x0 >> y0 >> c >> b >> d >> h;
	for (int k = 0; k < 11; k++)
	{
		x = d + k * h;
		if (fabs(x0) < a and fabs(y0) < a)
		{
			if ((c * x) < 0)
				cout << "error, reenter values";
			else
			{
				y = (pow(c * x, b / 2) - 3) * (pow(c * x, b / 2) - 3);
				cout << "y = " << y << "\n";
			}
		}
		else
		{
			if ((c * x) < 0)
				cout << "error, reenter values";
			else
			{
				y = x * x + 2;
				cout << "y = " << y << "\n";
			}
		}
	}

}
