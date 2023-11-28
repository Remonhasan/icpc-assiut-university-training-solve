/*
    author: remonhasan
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main() {
  char a;
  cin >> a;
  if ((a >= 'A') && (a <= 'Z')) {
    a = a + 32;
    cout << a;
  } else if ((a >= 'a') && (a <= 'z')) {
    a = a - 32;
    cout << a;
  }

}