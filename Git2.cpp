#include <bits/stdc++.h>

using namespace std;

int main() {
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  
  if (num1 > num2) {
    if (num1 > num3) {
      cout << "The Big number is " << num1 << endl;
  } else {
      cout << "The Big number is " << num3 << endl;
  }
} else {
      if (num2 > num3) {
        cout << "The Big number is " << num2 << endl; 
      } else {
        cout << "The Big number is " << num3 << endl;
      }
}
  cout << "Hello World!" << endl;
  return 0;
}