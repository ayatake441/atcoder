// https://atcoder.jp/contests/abc180/tasks/abc180_c

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long number;
  stack<long long> answers;
  
  cin >> number;
  for (long long i=1; i*i<=number; i++) {
    if (number%i == 0) {
      cout << i << endl;
      if (i*i != number) {
        answers.push(i);
      }
    }
  }
  while (!answers.empty()) {
    cout << number/answers.top() << endl;
    answers.pop();
  }
}