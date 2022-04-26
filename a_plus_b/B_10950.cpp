#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int a, b, T = 0;
  cin >> T;
  while (T > 0){
    cin >> a >> b;
    cout << a+b << '\n';
    T--;
  }
}
