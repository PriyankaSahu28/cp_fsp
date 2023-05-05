#include <iostream>

using namespace std;
int clearBitsInRange(int &num, int i, int j) {

   int mask = ((1 << i) - 1) | (~0 << (j + 1));

    // Use the bitwise AND operator to clear the bits in the range
    num &= mask;
    return num;
    //cout<<"After clearing bits in given range we get "<<num<<endl;
}

void replaceBitsInRange(int &num, int m,int i,int j) {
//clearBitsInRange(num,i,j);
int mask = ((1 << i) - 1) | (~0 << (j + 1));
    num &= mask;

   cout<<"After clearing bits in given range we get "<<num<<endl;
     m<<=i;
    num |= m;
    cout<<"After replacing bits in given range we get "<<num<<endl;
}


int main()
{
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    int i,j,m;
   cout << "Enter an starting index value (0 based): ";
    cin >> i;
 cout << "Enter an ending index value (0 based): ";
    cin >> j;
cout<<"Enter the bits which u want to replace ";
cin>>m;

    replaceBitsInRange(n,m,i,j);



    return 0;
}
