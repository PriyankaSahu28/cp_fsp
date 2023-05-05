#include <iostream>
using namespace std;

int strToInt(string str,int n) {

  if(n==1){
    return int(str[0]-'0');
  }
    
    int last_digit= int(str[n-1]-'0');
    str.pop_back();
    return strToInt(str,n-1)*10+last_digit;

}

int main() {
    string str = "1234";
    int n=str.length();
    int num = strToInt(str,n);
    cout << "The integer value of " << str << " is " << num << endl;
    return 0;
}
