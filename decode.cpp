#include<iostream>
#include<string>
using namespace std;

int decode(string &s){
  if(s.empty()) return 0;
  int pre=1, cur=1;
  for(int i=1; i<s.length(); ++i){
    int t=cur;
    if(s[i-1]=='1' || s[i-1]=='2' && s[i]<='5')
      cur+=pre;
    pre=t;
  }
  return cur;
}

int main(){
  string s("132493820173849029382910382");
  cout<<decode(s)<<endl;
}
