//https://atcoder.jp/contests/abc174/tasks/abc174_c

#include <bits/stdc++.h>
using namespace std;

int main() {
  int number; 
  long long doublet = 0;
  cin >> number;
  
  for (int i=0; i<=number; i++) {
    doublet = (doublet*10+7)%number;
    if (doublet%number == 0) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}