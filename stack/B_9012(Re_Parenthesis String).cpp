#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int n = 0;
  cin >> n;
  while(n--){
    string ps;
    int no_case = 0;
    stack<char> l_ps;
    stack<char> r_ps;
    cin >> ps;

    for (int i=0; i < ps.length(); i++){
      if (ps[i] == '(') { l_ps.push(ps[i]); }
      else { r_ps.push(ps[i]); }
      if(l_ps.size() < r_ps.size()){
        no_case = 1;
        cout << "NO\n";
        break;
      }
    }
    if (no_case == 0){
      if (l_ps.size() == r_ps.size()){ cout << "YES\n"; }
      else { cout << "NO\n"; }
    }
  }
}
