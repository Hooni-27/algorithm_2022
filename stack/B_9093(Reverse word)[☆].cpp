#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> str_stack;

int main() {
  int t = 0;
  cin >> t;
  cin.ignore();
  while(t > 0){
    string str;
    getline(cin, str);
    string result;
    for (int i = 0; i < str.length(); i++) {
      if (str[i] == ' '){
        while (str_stack.size() != 0){
          result = result + str_stack.top();
          str_stack.pop();
        }
        if (i < str.length()) { result = result + ' '; }
      }
      else if (i == str.length() - 1){
        str_stack.push(str[i]);
        while (str_stack.size() != 0){
          result = result + str_stack.top();
          str_stack.pop();
        }
      }
      else{
        str_stack.push(str[i]);
      }
    }
    cout << result << '\n';
    t--;
  }
}
