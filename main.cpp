#include <iostream>
#include <cmath>
using namespace std;

// 2

// int main()
// {
//     int n, m[37];
//     cout<<"enter first number\n";
//     cin>>n;
//     for (int i = 0; i < 37; i++)
//     {
//         m[i] = n;
//         n++;
//     }
//     for (int i = 0; i < 37; i++) {
//         if (m[i] <= 0) {
//             cout<<m[i]<<endl;
//         }
//         else {
//             cout<<m[i]<<" -> "<<m[i] - 0.5<<endl;
//         }
//     }
//
// }

//3

// int factorial(int n) {
//     int result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }
//
// int main() {
//     int k = 0, n, a, temp[3];
//     cout << "enter number of numbers and the first number\n";
//     cin >> n >> a;
//     int m[n];
//     for (int i = 0; i < n; i++) {
//         m[i] = a;
//         a++;
//     }
//     for (int i = 0; i < n; i++) {
//         if ((i+1)<m[i] && (m[i]<factorial(i)) && k <= 2) {
//             temp[k] = m[i];
//             k++;
//         }
//     }
//     if (temp[0]*temp[1]*temp[2] == 0) {
//         cout<<"no suitable numbers were found";
//     }
//     else
//         cout<<1./(temp[0]*temp[1]*temp[2])<<endl;
// }