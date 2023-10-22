// author: remon hasan
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(ll a, ll b, ll k) {
  if ((a % k == 0) && (b % k == 0)) {
    cout << "Both" << endl;
  } else if ((a % k == 0) && (b % k != 0)) {
    cout << "Memo" << endl;
  } else if ((a % k != 0) && (b % k == 0)) {
    cout << "Momo" << endl;
  } else {
    cout << "No One" << endl;
  }
}

int main() {
  ll a, b, k;
  cin >> a >> b >> k;
  solve(a, b, k);
}