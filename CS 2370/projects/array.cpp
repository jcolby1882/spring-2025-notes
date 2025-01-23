#include <iostream>
using namespace std;

int main() {
  const int NUM_VALS = 4;
  int courseGrades[NUM_VALS];
  int i;

  for (i = 0; i < NUM_VALS; i++) {
    cin >> courseGrades[i];
  }

  for (i = NUM_VALS - 1; i >= 0; i--) {
    cout << i << courseGrades[i] << endl;
  }

  return 0;
}
