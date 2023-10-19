// author: remonhasan 
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long

void solve(float A, float B) {

  float result = A / B;
  float floorResult = floor(result);
  float ceilResult = ceil(result);
  float roundResult = round(result);
  cout << "floor " << A << " " << "/" << " " << B << " = " << floorResult << endl;
  cout << "ceil " << A << " " << "/" << " " << B << " = " << ceilResult << endl;
  cout << "round " << A << " " << "/" << " " << B << " = " << roundResult << endl;

}

int main() {

  float A, B;
  cin >> A >> B;
  solve(A, B);
}