// author: remonhasan
#include<bits/stdc++.h>
#include <bitset>
using namespace std;

#define ll long long
#define UI unsigned int 

void solve(UI N){
  // convert decimal to binary 
  bitset<32> binaryRepresentation(N);

  // count one's (1)
  int onesCount = binaryRepresentation.count();

  // Calculate the decimal number with only onesCount ones
  int result = (1 << onesCount) - 1;

  cout<< result << endl;
}

int main() {

   int t;
   cin>>t;

   while(t--){
    UI N;
    cin>>N;
    solve(N);
   }
}