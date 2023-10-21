// author: remon hasan
#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(ll l1, ll r1, ll l2, ll r2) {

  ll intersectLeft = max(l1, l2);
  ll intersectRight = min(r1, r2);

  intersectLeft <= intersectRight ? cout << intersectLeft << " " << intersectRight << endl : cout << -1 << endl;

}

int main() {

  ll l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  solve(l1, r1, l2, r2);

}