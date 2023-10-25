// author: remonhasan
#include<bits/stdc++.h>
#include <string>
using namespace std;

#define ll long long

void solve(int N) {

  string numStr = to_string(N);
  
  for (int i = numStr.length() - 1; i >= 0; i--) {
    cout << numStr[i];
    if (i > 0) {
      cout << ' ';
    }
  }

  cout << endl;
}

int main() {
  int N, t;
  cin >> t;

  while (t--) {
    cin >> N;
    solve(N);
  }

}