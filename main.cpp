#include <iostream>
#include "fibonacci.hpp"
using namespace std;

int main() {
  cout << "Give me a fucking number: ";
  int n;
  cin >> n;
  cout << "n = " << n << '\n';
  for (int i = 0; i <= n; ++i)
    cout << "fibonacci(" << i << ") = " << fibonacci(i) << "\n";
}
