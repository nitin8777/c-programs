#include <iostream>
using namespace std;
int main() {
  int i, j, n;
  cout << "enter";
  cin >> n;
  for (i = 0; i < n; i++) {
    for (j = 0; j < i; j++) {
      cout << "*";
    }
    for (j = 0; j < 2 * (n - i); j++) {
      cout << " ";
    }
    for (j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  for (i = n; i > 0; i--) {
    for (j = 0; j < i; j++) {
      cout << "*";
    }
    for (j = 0; j < 2 * (n - i); j++) {
      cout << " ";
    }
    for (j = 0; j < i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}