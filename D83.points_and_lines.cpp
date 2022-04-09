#include <bits/stdc++.h>
using namespace std;

int main() {
  long int t;
  cin >> t;

  while (t--) {
    vector<int> v1, v2;
    set<int> s1, s2;
    int n, temp1, temp2, count = 0, i;
    cin >> n;

    while (n--) {
      cin >> temp1 >> temp2;

      s1.insert(temp1);
      s2.insert(temp2);
    }

    cout << s1.size() + s2.size() << endl;
  }

  return 0;
}
