#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int *arr = new int[n + 1]();
  arr[0] = 1;

  for (int i = 3; i <= n; i++) {
    arr[i] += arr[i - 3];
  }
  for (int i = 5; i <= n; i++) {
    arr[i] += arr[i - 5];
  }
  for (int i = 10; i <= n; i++) {
    arr[i] += arr[i - 10];
  }

  cout << "Total no of combinations are " << arr[n];

  return 0;
}
