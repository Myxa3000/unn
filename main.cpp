#include <iostream>
#include <cmath>
using namespace std;

//1

// int main() {
//     float x[5], y[5], z[5], maxx = x[0], maxy = y[0], maxz = z[0];
//
//     cout << "Enter 5 values of x:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cin >> x[i];
//     }
//     cout << "Enter 5 values of y:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cin >> y[i];
//     }
//     cout << "Enter 5 values of z:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cin >> z[i];
//     }
//
//     for (int i = 0; i<5;i++) {
//         maxx = max(maxx, x[i]);
//     }
//     for (int i = 0; i<5;i++) {
//         maxy = max(maxy, y[i]);
//     }
//     for (int i = 0; i<5;i++) {
//         maxz = max(maxz, z[i]);
//     }
//     cout<<max(max(maxx, maxy), maxz)<<endl;
// }

//2

// int main() {
//     int arr[10], n; bool flag = false;
//     cout<<"enter 10 values for array: "<<endl;
//     for (int i = 0; i < 10; i++) {
//         cin>>arr[i];
//     }
//     cout<<"enter control number: "<<endl;
//     cin>>n;
//     for (int i = 0; i<10; i++) {
//         if (arr[i] == n) {
//             flag = true;
//         }
//     }
//     if (flag == true) {
//         cout<<"yes"<<endl;
//     }
//     else {
//         cout<<"no"<<endl;
//     }
// }

//3

// int main() {
//     double arr[10]; bool flag = true;
//     cout<<"enter 10 values for array: "<<endl;
//     for (int i=0; i<10;i++) {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < 9; i++) {
//         if (arr[i] >= arr[i+1]) {
//             flag = false;
//         }
//     }
//     if (flag) {
//         cout<<"yes"<<endl;
//     }
//     else {
//         cout<<"no"<<endl;
//     }
// }

//4

// int main() {
//     int n; bool flag = false;
//     cout<<"enter size of array: "<<endl;
//     cin>>n;
//     double arr[n];
//     cout<<"enter "<< n << " values for array: "<<endl;
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     for (int i=0;i<n;i++) {
//         for (int j=i+1;j<n;j++) {
//             if (arr[i] == arr[j]) {
//                 flag = true;
//                 break;
//             }
//         }
//     }
//     if (flag) {
//         cout<<"yes"<<endl;
//     }
//     else {
//         cout<<"no"<<endl;
//     }
// }

//5

// int main() {
//     int n; double sr;
//     cout<<"enter the size of array: "<<endl;
//     cin>>n;
//     double arr[n];
//     cout<<"enter the elements of array: "<<endl;
//     for (int i = 0; i < n; i++) {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n; i++) {
//         sr += arr[i];
//     }
//     cout<<"average is: "<<sr/n<<endl;
// }

//6

// int main() {
//     int n1;
//     cout<<"enter the size of array: "<<endl;
//     cin>>n1;
//     cout<<"enter the array elements: "<<endl;
//     double arr[n1];
//     for (int i=0; i<n1; i++) {
//         cin>>arr[i];
//     }
//
//     double mx = arr[0], mn = arr[0];
//
//     for (int i=0; i<n1;i++) {
//         mx=max(arr[i], mx);
//         mn=min(arr[i], mn);
//     }
//     cout<<mx - mn<<endl;
// }