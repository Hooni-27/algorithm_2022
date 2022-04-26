#include <iostream>
using namespace std;

int main() {
  int a, b, T = 0;
  cin >> T;
  while (T > 0){
    scanf("%d,%d", &a, &b);
    int sum = a + b;
    printf("%d\n", sum);
    T--;
  }
}
