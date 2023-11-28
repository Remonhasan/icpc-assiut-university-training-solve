/*
    author: remonhasan
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main() {
    
  int a, first;
  cin >> a;
  first = a;
  while (first >= 10) {
    first = first / 10;
  }
  
  if (first % 2 == 0) cout << "EVEN";
  else cout << "ODD";

}