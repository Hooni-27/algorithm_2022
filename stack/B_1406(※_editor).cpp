#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> str_stack;
stack<char> tmp;
stack<char> tmp_other;
stack<char> result;

int main() {
  string str;
  cin >> str;
  for (int i = 0; i < str.length(); i++){
    str_stack.push(str[i]);
    tmp.push(str[i]);
  }
  int m = 0;
  cin >> m;
  while (m--){
    char cmd;
    char str_in;
    cin >> cmd;
    if (cmd == 'P'){
      cin >> str_in;
      tmp.push(str_in);
      str_stack = tmp;
      stack<char> tmp2 = tmp_other;
      while (!tmp2.empty()){
        str_stack.push(tmp2.top());
        tmp2.pop();
      }
    }
    else if (cmd == 'L'){
      if (!tmp.empty()) {
        tmp_other.push(tmp.top());
        tmp.pop();
      }
    }
    else if (cmd == 'D'){
      if(!tmp_other.empty()) {
        tmp.push(tmp_other.top());
        tmp_other.pop();
      }
    }
    else if (cmd == 'B'){
      if (!tmp.empty()) { tmp.pop(); }
      str_stack = tmp;
      stack<char> tmp2 = tmp_other;
      while(!tmp2.empty()){
        str_stack.push(tmp2.top());
        tmp2.pop();
      }
    }
  }
  while (!str_stack.empty()){
    result.push(str_stack.top());
    str_stack.pop();
  }

  while (!result.empty()){
    cout << result.top();
    result.pop();
  }
}
