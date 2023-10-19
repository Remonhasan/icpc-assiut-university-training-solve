// author: remonhasan 
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(float X, float Y) {

  if (X > 0 && Y > 0) {
    cout << "Q1" << endl;
  } else if (X < 0 && Y > 0) {
    cout << "Q2" << endl;
  } else if (X < 0 && Y < 0) {
    cout << "Q3" << endl;
  } else if (X == 0 && Y == 0) {
    cout << "Origem" << endl;
  } else if ((X == 0 && Y > 0) || (X == 0 && Y < 0)) {
    cout << "Eixo Y" << endl;
  } else if ((X > 0 && Y == 0) || (X < 0 && Y == 0)) {
    cout << "Eixo X" << endl;
  } else {
    cout << "Q4" << endl;
  }
}

int main() {

  float X, Y;
  cin >> X >> Y;
  solve(X, Y);
}