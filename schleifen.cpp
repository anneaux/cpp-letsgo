#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// int x = asin(-1);
// double y = 3.4e-2;
// float z = 1.222f;
// char c = 'h';
// string s = "muschibubu";
// if (n == 10) {
//   cout << "herzlichen Glückwunsch!";
// } else if (n == 5) {
//   cout << "auch okay";
// } else {
//   cout << "schade marmelade";
// }
// while (n != 0) {
//   --n;
//   cout << "n = " << n << "\n";
// do { ...
// } while (...)
int main() {
  cout << "Gimme, gimme a number after midnight!";
  int n;
  cin >> n;
  cout << n << "ist n \n";
  for (int i = 0; i < n;
       ++i) {  // (INIT; COND; WAS AM SCHLEIFENENDE AUSGEFÜHRT WIRD)
    cout << "i = " << i << "\n";
  }
}
