/*
()

cstak
(
*/
#include <iostream>
#include <stack>
#include <map>
using namespace std;
bool isValid (string &s){
  map <char,char> ref;
  stack <char> cstack;

  //create pairs
  ref['('] = ')';
  ref['{'] = '}';
  ref['['] = ']';
  
  for (int i = 0 ; i < s.size() ; i++){
    if (s[i] == '{' || s[i] == '(' || s[i] == '['){
      cstack.push(s[i]);
    }else{
      //check for invalid pop
      if (cstack.empty()){
        return false;
      }

      //check the pop is for the newest unclosed
      //cout<<ref[s[i]]<<"**" <<cstack.top()<<endl;
      if (s[i] ==ref[cstack.top()]){
        cstack.pop();
      }else{
        return false;
      }
      
    }
  }
  
  if (cstack.empty()){
    return true;
  }else{
    return false;
  }
  
}

int main() {
  string s;
  cin>>s;

  isValid(s) ? cout << "isvalid" : cout << "not valid";
  }
