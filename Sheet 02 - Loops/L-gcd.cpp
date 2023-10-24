// author: remon hasan
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define d double

int solve(int a, int b) {

  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

int main() {

  int a, b;
  cin >> a >> b;
  cout << solve(a, b) << endl;
}