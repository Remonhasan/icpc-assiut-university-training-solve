// author: remonhasan
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n) {
  for (int i = 1; i <= n; i++) {
    cout << i;
    if (i < n) {
      cout << ' ';
    }
  }
}

int main() {
  int n;
  cin >> n;
  solve(n);
}