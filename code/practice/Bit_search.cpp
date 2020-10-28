#include <bits/stdc++.h>
using namespace std;

vector<int> all_cases_sum(vector<int> numbers) {
  vector<int> answers;
  int size = numbers.size();

  //When bits=5, (i=0)101&001=True, (i=1)101&010=False, (i=2)101&100=True.
  for (int bits=0; bits<(1<<size); bits++) {
    int sum = 0;
    for (int i=0; i<size; i++) {
      int mask = 1<<i;
      if (bits&mask) {
        sum += numbers.at(i);
      }
    }
    answers.push_back(sum);
  }
  return answers;
}

//search all cases for {21, 54, 78}.
int main() {
  vector<int> a = all_cases_sum({21, 54, 78});
  for(auto itr = a.begin(); itr != a.end(); ++itr) {
    cout << *itr << endl;
    }
}