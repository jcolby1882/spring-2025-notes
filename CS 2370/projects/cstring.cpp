#include <iostream>
using namespace std;

int main() {
  char arr[14];
  for (int i = 0; i < 13; i++) {
    cout << "type a character: ";
    cin >> arr[i];
  }
  arr[13] = '\0';
  for (int i = 0; i < 13; i++) {
    arr[i] = toupper(arr[i]);
  }
  cout << "You typed: " << arr << endl;
}
