#include <iostream>
#include <cmath>
#include <complex>
#include<fstream>
#include<string>


using namespace std;

// int main() {
//     int n=0; int res=0;
//     cout<<"enter size"<<endl; cin>>n;
//     int* arr1 = new int[n];
//     for (int i=0; i<n; i++) {
//         cout<<"enter element "<<i+1<<endl; cin>>arr1[i];
//     }
//
//
//     for (int i=0; i<n; i++) {
//         bool flag=false;
//         for (int j=0; j<i; j++) {
//             if (arr1[j]==arr1[i]) {
//                 flag=true;
//                 break;
//             }
//         }
//         if (!flag) {
//             int counter=0;
//             for (int k=0; k<n; k++) {
//                 if (arr1[k]==arr1[i]) {
//                     counter++;
//                 }
//             }
//             if (counter>1) {
//                 res++;
//             }
//         }
//     }
//     delete[] arr1;
//     cout<<res;
// }

// int counter(int a) {
//     int res=0;
//     if (a<0) {
//         a=-a;
//     }
//     while (a>0) {
//         res+=a%10;
//         a/=10;
//     }
//     return res;
// }
//
//
// int main() {
//     int n; string numb;
//     ifstream file("f1.txt");
//     if (!file) {
//         cout << "File Not Found" << endl;
//         exit(1);
//     }
//
//     file>>n;
//     int* arr = new int[n];
//     int* arr2 = new int[n];
//
//     for (int i = 0; i < n; i++) {
//         file>>arr[i];
//         arr2[i]=i+1;
//     }
//     file.close();
//
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             int sum1 = counter(arr[j]);
//             int sum2 = counter(arr[j + 1]);
//
//             if (sum1 > sum2) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//
//                 temp = arr2[j];
//                 arr2[j] = arr2[j + 1];
//                 arr2[j + 1] = temp;
//             }
//         }
//     }
//
//     ofstream fout("f2.txt");
//     if (!fout) {
//         cout << "File Not Found2" << endl;
//         exit(1);
//     }
//     for (int i = 0; i < n; i++) {
//         fout<<arr[i]<<" - "<<arr2[i]<<endl;
//     }
//     fout.close();
// }