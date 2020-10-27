// https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_c

#include <bits/stdc++.h>
using namespace std;
     
int main() {
  long long student_num, song_num;
  cin >> student_num >> song_num;
  
  vector<vector<long long>> points(student_num, vector<long long>(song_num));
  for (int i=0; i<student_num; i++) {
    for (int j=0; j<song_num; j++) {
      cin >> points.at(i).at(j);
    }
  }
  long long max_point = 0;
  for (int i=0; i<song_num-1; i++) {
    for (int j=i+1; j<song_num; j++) {
      long long count = 0;
      
      for (int k=0; k<student_num; k++) {
        if (points.at(k).at(i) >= points.at(k).at(j)) {
          count += points.at(k).at(i);
        }
        else {
          count += points.at(k).at(j);
        }
      }
      
      max_point = max(max_point, count);
    }
  }
  cout << max_point << endl;
}