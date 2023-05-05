#include <iostream>
#include<string>
using namespace std;

string ReplacePi(string str) {
int n=str.length();
  if(n<=1){
    return str;
  }
if(str[0]=='p' && str[1]=='i'){
    return "3.14" + ReplacePi(str.substr(2));
}else{
    return str[0]+ReplacePi(str.substr(1));
}

}

int main() {
    string str = "prpiiypianpika";
    string ans =ReplacePi(str);
    cout << "The string after replacing pi is " << ans<< endl;
    return 0;
}
