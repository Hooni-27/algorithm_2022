#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> num_make;
stack<int> temp1;
stack<int> temp2;

int array_num = 0;

void check(){
  if (temp1.top() == num_make.at(array_num)){
    temp2.push(temp1.top());
    temp1.pop();
    cout << "-\n";
    if (array_num < num_make.size() - 1) {
      array_num++;
    }
    if (temp1.empty()){
      return;
    }
    if (temp1.top() == num_make.at(array_num)){
      check();
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n = 0;
  cin >> n;
  int num_end = n;
  int max_ind = 0;
  int tmp = 0;

  while (n--){
    int num = 0;
    cin >> num;
    num_make.push_back(num);
    if (num == num_end) { max_ind = tmp; }
    tmp++;
  }

  if(max_ind < num_make.size() - 3){
    for (int a = max_ind + 1; a < num_make.size(); a++){
      for (int b = a + 1; b < num_make.size(); b++){
        if (num_make.at(a) < num_make.at(b)){
          cout << "NO";
          return 0;
        }
      }
    }
  }

  int i = 1;
  while (i < num_end + 1){
    temp1.push(i);
    cout << "+\n";
    check();
    i++;
  }
}
