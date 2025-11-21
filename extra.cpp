#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
using namespace std;



//2

int main() {
	int n; long double sum=0;
	cout << "enter number of calculations\n"; cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += 1.0 / (i * (i + 1.0));
	}
	cout << 1 - sum;
}
