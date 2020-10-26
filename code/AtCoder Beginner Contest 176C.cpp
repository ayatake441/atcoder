// https://atcoder.jp/contests/abc176/tasks/abc176_c

#include <bits/stdc++.h>
using namespace std;
     
int main() {
  int a;
  cin >> a;
  
  int num[a];
  for (int i=0; i<a; i++) {
    cin >> num[i];
  }
      
  long long count = 0, max_height = num[0];
  for (int j=1; j<a; j++) {
    if (max_height > num[j]) {
      count += max_height - num[j];
    }
    else {
      max_height = num[j];
    }
  }
  cout << count << endl;
}