// author: remonhasan
#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve(char c) {
  if (c == 'z') {
    cout << 'a' << endl;
  } else {
    cout << char(c + 1) << endl;
  }

}

int main() {

  char c;
  cin >> c;
  solve(c);
}