#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//card 3 (var20)
//1
// int main() {
// 	int tmp = 0, ar[5], x = 0, y = 0, ans = 0;
// 	for (int i = 0; i < 5; i++) {
// 		cout << "enter " << i + 1 << " element:" << endl;
// 		cin >> tmp;
// 		ar[i] = tmp;
// 		tmp = 0;
// 	}

// 	int mina = ar[0], maxa = ar[0];

// 	for (int i = 0; i < 5; i++) {
// 		if (ar[i] > maxa) {
// 			maxa = ar[i];
// 		}
// 		if (ar[i] < mina) {
// 			mina = ar[i];
// 		}
// 	}



// 	ans = maxa - mina;
// 	for (int i = 0; i < 4; i++) {
// 		for (int j = i + 1; j <= 4; j++) {
// 			if (abs(ar[i] - ar[j]) <= ans) {
// 				x = ar[i];
// 				y = ar[j];
// 				ans = abs(ar[i] - ar[j]);
// 			}
// 			else {
// 				j++;
// 			}
// 		}
// 	}
// 	cout << "first number: " << x << endl;
// 	cout << "second number: " << y << endl;
// }





// методичка (8 тема вариант 20)
 // int cnt(string s, char l) {
 //     int result = 0;
 //     for (int i=0;s[i]!='\0';i++) {
 //         if (s[i] == l) {
 //             result++;
 //         }
 //     }
 //     return result;
 // }


 // int main() {
 //     string s, sa;
 //     cout<<"enter string:"<<endl;
 //     getline(cin, s);
 //     for (int i=0; i<s.length();i++) {
 //         if (cnt(sa, s[i]) == 0) {
 //             sa += s[i];
 //         }
 //         else i++;
 //     }
 //     for (int i=0; i<sa.length();i++) {
 //         cout<<sa[i]<<": "<<cnt(s, sa[i])<<endl;
 //     }
 // }
