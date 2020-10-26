//https://atcoder.jp/contests/abc175/tasks/abc175_c

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long location, number, moving;
  cin >> location >> number >> moving;
  location = abs(location);
  
  if (number < location/moving) {
    cout << location - number*moving;
    return 0;
  }
  
  number -= location/moving;
  location = location%moving;
  
  if (number%2 == 0) {
    cout << location;
  }
  else {
    cout << moving-location;
  }
}