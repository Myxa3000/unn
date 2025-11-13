#include <iostream>
#include <cmath>
#include <string>
using namespace std;


 int cnt(string s, char l) {
     int result = 0;
     for (int i=0;s[i]!='\0';i++) {
         if (s[i] == l) {
             result++;
         }
     }
     return result;
 }


 int main() {
     string s, sa;
     cout<<"enter string:"<<endl;
     getline(cin, s);
     for (int i=0; i<s.length();i++) {
         if (cnt(sa, s[i]) == 0) {
             sa += s[i];
         }
         else i++;
     }
     for (int i=0; i<sa.length();i++) {
         cout<<sa[i]<<": "<<cnt(s, sa[i])<<endl;
     }
 }
