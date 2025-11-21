#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

//int main()
//{
//	int n, a1, s = 0, a2;
//	cout << "enter amount of numbers\n";
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << "enter " << i << " num" << endl;
//		cin >> a1;
//		s += a1 * a1;
//		a1 = 0;
//	}
//	cout << "s = " << s;
//}

int main()
{
	double a1; int m[37];
	cout << "enter fist number\n";
	cin >> a1;
	for (int i = 0; i < 38; i++)
		m[i] = a1;
		a1 += 1;
	for (int i = 0; i < 38; i++)
		if (m[i] < 0)
		{
			cout << m[i] << endl;
		}
		else
		{
			cout << m[i] - 0.5 << endl;
		}
}

//int main()
//{
//	int a1, n, s = 1;
//	cout << "enter n\n";
//	cin>>n;
//	cout << "enter fist number\n";
//	cin >> a1;
//	int m[n];
//	for (int i = 1; i <= n; i++)
//	{
//		m[i] = a1;
//		a1 += 1;
//	}
//}
