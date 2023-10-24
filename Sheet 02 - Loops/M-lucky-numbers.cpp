// author: remon hasan
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define d double

bool isLuckyNumber(int num) {
  while (num > 0) {
    int digit = num % 10;
    if (digit != 4 && digit != 7) {
      return false;
    }
    num /= 10;
  }
  return true;
}

int main() {

  int A, B;
  cin >> A >> B;

  bool found = false;
  for (int num = A; num <= B; num++) {
    if (isLuckyNumber(num)) {
      found = true;
      cout << num << " ";
    }
  }

  if (!found) {
    cout << -1;
  }
  cout << endl;

  return 0;
}