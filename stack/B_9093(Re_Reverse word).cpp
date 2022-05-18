#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> temp;

int main() {
  int n = 0;
  cin >> n;
  cin.ignore();
  // n번의 test case 실행
  while(n > 0){
    string str;
    getline(cin, str);
    string result;
    for(int i=0; i < str.length(); i++){
      if (str[i] == ' '){
        while(temp.size() != 0) {
          result = result + temp.top();
          temp.pop();
        }
        result = result + ' ';
      }
      else if (i == str.length()-1){
        temp.push(str[i]);
        while(!(temp.empty())) {
          result = result + temp.top();
          temp.pop();
        }
      }
      else{
        temp.push(str[i]);
      }
    }
    cout << result << '\n';
    n--;
  }

}
