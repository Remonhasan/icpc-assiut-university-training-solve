/*
    author: remonhasan
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include <iostream>

using namespace std;

int main() {
  long long a, b, last1, last2, sum = 0;
  cin >> a >> b;
  last1 = a % 10;
  last2 = b % 10;
  sum = last1 + last2;
  cout << sum;

}