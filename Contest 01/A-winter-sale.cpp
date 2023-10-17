// author: remon hasan 
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long 

void solve(int X, double P)
{
    double originalPrice = P / (1 - X / 100.0);
    originalPrice = round(originalPrice * 100) / 100;
    cout<<std::fixed<<setprecision(2)<<originalPrice<<endl;
}

int main() {

    int X;
    double P;
    cin >> X >> P;
    solve(X,P);
}
