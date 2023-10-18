// author: remon hasan
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int a[], int n) {
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
  sort(a, a + n, greater < int > ());
  for (int i = 0; i < n; i++) {
    cout << endl << a[i];
  }
}

int main() {
  int a[3];
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  int n = sizeof(a) / sizeof(a[0]);
  solve(a, n);
}