// author: remon hasan
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long
#define d double

bool solve(int N) {

  if (N == 1999) {
    return true;
  } else {
    return false;
  }

}

int main() {
  int N;
  while (cin >> N) {
    if (solve(N)) {
      cout << "Correct" << endl;
      break;
    } else {
      cout << "Wrong" << endl;
      continue;
    }
  }
}