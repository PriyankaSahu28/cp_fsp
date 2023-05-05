#include <iostream>
using namespace std;

string digit_to_word(int n)
{
    switch (n)
    {
    case 0:
        return "zero";
    case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6:
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    default:
        return "";
    }
}

string num_to_word(int n)
{
    if (n == 0)
        return "";
    else
        return num_to_word(n / 10) + " " + digit_to_word(n % 10);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string result = num_to_word(n);
    if (result == "")
        result = "zero";
    cout << "The spelling of the given number is: " << result << endl;
    return 0;
}
