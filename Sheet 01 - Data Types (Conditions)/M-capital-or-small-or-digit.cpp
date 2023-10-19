// author: remonhasan 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long

void solve(char c) {

  if (std::isdigit(c)) {
    cout << "IS DIGIT" << endl;
  } else {
    if (std::isupper(c)) {
      cout << "ALPHA" << endl;
      cout << "IS CAPITAL" << endl;
    } else {
      cout << "ALPHA" << endl;
      cout << "IS SMALL" << endl;
    }
  }
}

int main() {

  char c;
  cin >> c;
  solve(c);
}