#include <bits/stdc++.h>

using namespace std;

int main() {
  int num;
  cin >> num;
  for(int i=1; i<=(num+1); i++) {
    for(int j=1; j<=i; j++) {
      cout << " *";
    }
    cout << endl;
  }
  for(int i=1; i<=num; i++) {
    for(int j=num; j>=i; j--) {
      cout << " *";
    }
    cout << endl;
  }
  cout << "Hello World!" << endl;
  return 0;
}