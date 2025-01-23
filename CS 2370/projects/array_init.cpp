#include <iostream>
using namespace std;

int main() {
  int a[3];
  for (auto i : a)
    cout << i << endl;
  cout << endl;

  int b[3] = {};
  for (auto i : b)
    cout << i << endl;

  int c[] = {1, 2, 3};
  for (auto i : c)
    cout << i << endl;
}
