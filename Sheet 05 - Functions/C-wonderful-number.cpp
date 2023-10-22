// author: remonhasan
#include<bits/stdc++.h>
#include <bitset>
using namespace std;

#define ll long long

bool isPalindrome(int n);

void isOdd(int n) {
  // Check odd and Palindrome or not
   (n%2 != 0) && isPalindrome(n) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}

bool isPalindrome(int n){

  // Convert the decimal number to its binary representation
  string binaryStr = std::bitset<sizeof(int) * 8>(n).to_string();
  
  // Remove leading zeros in the binary representation
  size_t pos = binaryStr.find_first_not_of('0');
  binaryStr = (pos != std::string::npos) ? binaryStr.substr(pos) : "0";
  
  // Create a reversed binary representation
  string reversedBinaryStr = binaryStr;
  std::reverse(reversedBinaryStr.begin(), reversedBinaryStr.end());

  // Check if the binary representation is a palindrome
  return binaryStr == reversedBinaryStr;
}


int main() {
  int n;
  cin >> n;
  isOdd(n);
}