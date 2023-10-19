// author: remonhasan 
#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(int A, char c, int B) {

  int result = 0;
  if (c == '+') {
    result = A + B;
  } else if (c == '-') {
    result = A - B;
  } else if (c == '*') {
    result = A * B;
  } else {
    result = A / B;
  }
  cout << result << endl;
}

int main() {

  int A, B;
  char c;
  cin >> A >> c >> B;
  solve(A, c, B);
}