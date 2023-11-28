/*
    author: remonhasan
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main() {
  int A, B;
  char S, E;
  double R, r;

  cin >> A;
  cin >> S;
  cin >> B;
  cin >> E;
  cin >> R;

  if (S == '+') {
    r = A + B;

  } else {
    if (S == '-') {
      r = A - B;
    } else if (S == '*') {
      r = A * B;
    }
  }

  if (r == R) {
    cout << "Yes";
  } else {
    cout << r;
  }
  return 0;
}