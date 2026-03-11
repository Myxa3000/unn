#include <iostream>
#include <cmath>
#include <complex>
#include<fstream>
#include<string>
using namespace std;

//
//1
//

int n; int ans = 0;

int finder(int x, int* ar)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (x == ar[i])
		{
			res++;
		}
	}
	return res;
}


int main()
{
	cout << "enter number of elemnts" << endl; cin >> n;
	int* array = new int[n]; int nw[100]; int j = 0;

	for (int i = 0; i < n; i++)
	{
		nw[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "enter " << i + 1 << " elemnet:" << endl;
		cin >> array[i];
	}


	for (int i = 0; i < n; i++)
	{
		if (finder(array[i], array) == 1)
		{
			nw[j] = array[i];
			j++;
		}
	}



	for (int i = 0; i < j; j++)
	{
		if (finder(nw[j], array) > 1)
		{
			ans++;
		}
	}



	cout << "array: ";
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}

	cout << '\n' << "nw: ";
	for (int i = 0; i < j; i++)
	{
		cout << nw[i];
	}


	cout << '\n' << "the answer is: " << ans << endl;
}



//2

//int main()
//{
//	ifstream file("f1.txt");
//	int i = 1; string s; string storage[2];
//
//	if (file.is_open())
//	{
//		for (int i = 0; i < 2; i++)
//		{
//			getline(file, s);
//			storage[i] = s;
//		}
//	}
//	file.close();
//
//	int number = stoi(storage[0]);
//
//}