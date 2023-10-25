// author: remonhasan
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int a, int b) {

  int highest, lowest;

  if (a > b) {
    highest = a;
    lowest = b;
  } else {
    highest = b;
    lowest = a;
  }

  int sum = 0;
  for (int i = lowest + 1; i < highest; i++) {
    if (i % 2 != 0) {
      sum = sum + i;
    }
  }
  cout << sum << endl;

}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;
    solve(a, b);
  }
}