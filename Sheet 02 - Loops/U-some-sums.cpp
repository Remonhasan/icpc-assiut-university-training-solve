// author: remonhasan
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int digitSum(int number) {

  int sum = 0;
  while (number != 0) {
    int digit = number % 10;
    sum += digit;
    number /= 10;
  }
  return sum;
}

int main() {

  int N, A, B;
  cin >> N >> A >> B;

  int totalSum = 0;
  for (int i = 1; i <= N; i++) {
    int sumDigit = digitSum(i);
    if (sumDigit >= A && sumDigit <= B) {
      totalSum += i;
    }
  }
  cout << totalSum << endl;
}