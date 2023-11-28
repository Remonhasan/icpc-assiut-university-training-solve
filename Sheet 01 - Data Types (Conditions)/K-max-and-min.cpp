/*
    author: remonhasan
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int a[], int n) {
  sort(a, a + n);
  cout << a[0] << " " << a[2] << endl;
}

int main() {
  int a[3];
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  int n = sizeof(a) / sizeof(a[0]);
  solve(a, n);
}