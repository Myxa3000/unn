int main()
{
	double a, b, c, x1, x2;
	cout << "enter abc\n";
	cin >> a >> b >> c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "бесконечное множеств решений";
			}
			else
				cout << "решений нет";
		}
		else
		{
			x1 = -b / 2 * a;
			cout << "x = " << x1;
		}
	}
	else
	{
		double d = b * b - 4 * a * c;
		if (d > 0)
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			cout << "x1 = " << x1<< endl;
			cout << "x2 = " << x2;
		}
		else
		{
			x1 = (-b / (2 * a)) + (sqrt(-d) / 2 * a);
			x2 = (-b / (2 * a)) - (sqrt(-d) / 2 * a);
			cout << "x1 = " << x1 << "*i"<< endl;
			cout << "x2 = " << x2 << "*i";
		}
	}
}
