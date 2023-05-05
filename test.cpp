#include <iostream>
using namespace std;

string replacePi(string str) {
    // base case
    if (str.length() <= 1) {
        return str;
    }
    // recursive case
    if (str[0] == 'p' && str[1] == 'i') {
        return "3.14" + replacePi(str.substr(2));
    } else {
        return str[0] + replacePi(str.substr(1));
    }
}

int main() {
    string str = "xpix";
    cout << "Original string: " << str << endl;
    cout << "Modified string: " << replacePi(str) << endl;
    return 0;
}
