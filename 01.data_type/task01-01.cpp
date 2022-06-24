#include <iostream>
using namespace std;

int main() {
  float a;
  cout << "masukan bilangan real: " ;
  cin >> a;
  if (a < 0) {
    a = -a;
  }
  cout << "nilai mutlaknya adalah " << a << endl;
  return 0;
}