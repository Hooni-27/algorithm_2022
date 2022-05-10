#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> stack;

void push(int x){
  stack.push_back(x);
}

void pop() {
  if (stack.size() == 0){
    cout << "-1" << '\n';
    return;
  }
  cout << stack.back() << '\n';
  stack.erase(stack.end()-1);
}

void empty(){
  if (stack.size() == 0) { cout << "1" << '\n'; }
  else { cout << "0" << '\n'; }
}

void top(){
  if (stack.size() == 0) {
    cout << "-1" << '\n';
    return ;
  }
  cout << stack.back() << '\n';
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n = 0;
  cin >> n;
  string cmd;
  while (n > 0){
    cin >> cmd;
    if (cmd == "push"){
      int x = 0;
      cin >> x;
      push(x);
    }
    else if (cmd == "pop"){ pop(); }
    else if (cmd == "size"){ cout << stack.size() << '\n'; }
    else if (cmd == "empty"){ empty(); }
    else if (cmd == "top"){ top(); }
    n--;
  }
}
