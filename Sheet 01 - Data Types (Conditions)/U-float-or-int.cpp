// author: remon hasan
#include <bits/stdc++.h>

#include <cmath>

using namespace std;

#define ll long long
#define d double

void solve(d N) {

  if (std::abs(N - static_cast < int > (N)) < 1e-9) {
    cout << "int " << static_cast < int > (N) << endl;
  } else {
    // The number has a decimal part
    int intPart = static_cast < int > (N);
    double decimalPart = N - intPart;
    cout << "float " << intPart << " " << decimalPart << endl;
  }
  
}

int main() {
  d N;
  cin >> N;
  solve(N);
}