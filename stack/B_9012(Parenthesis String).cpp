#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n > 0){
    stack<char> PS {};
    string str_ps;
    cin >> str_ps;
    for (int i = 0; i < str_ps.length(); i++){
      PS.push(str_ps[i]);
    }
    int ps_left = 0;
    int ps_right = 0;
    while (PS.size() > 0){
      if (PS.top() == '(') { ps_left++; }
      else if (PS.top() == ')') { ps_right++; }
      if (ps_right < ps_left){ break; }
      PS.pop();
    }
    if (ps_left == ps_right) { cout << "YES\n"; }
    else { cout << "NO\n"; }
    n--;
  }
}
