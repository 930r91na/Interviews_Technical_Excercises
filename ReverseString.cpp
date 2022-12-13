#include <iostream>
#include <algorithm>

typedef unsigned int uint;

using namespace std;


// To execute C++, please define "int main()"
int main() {
  
  string inp = "foo bar";
  // string inp = "";
  if (inp.length() > 1) {
    for (uint start = 0, end = inp.length() - 1; start < end; start++, end--) {
      std::swap(inp[start], inp[end]);
    }
  }
  
  std::cout << inp << "\n";
  return 0;
}
