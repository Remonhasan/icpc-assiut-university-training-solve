/*
    author: remonhasan
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main() {

  int N, M;
  char S;
  cin >> N >> S >> M;
  if (S == '>') {
    if (N > M) {
      cout << "Right" << endl;
    } else {
      cout << "Wrong" << endl;
    }
  } else if (S == '<') {
    if (N < M) {
      cout << "Right" << endl;
    } else {
      cout << "Wrong" << endl;
    }
  } else {
    if (N == M) {
      cout << "Right" << endl;
    } else {
      cout << "Wrong" << endl;
    }
  }

  return 0;

}