#include <iostream>

using namespace std;

void getbit(int n,int i){

    if (n & (1<<i)>0)
    {
        cout << i << "th bit is 1" << endl;
    }
    else
    {
        cout << i << "th bit is 0" << endl;
    }
}


void setbit(int n,int i){

    int mask= (1<<i);
    int setbitans=n|mask;

        cout << "ans is " <<setbitans<< endl;


}

unsigned int clearBit(unsigned int num, int i) {
    unsigned int mask = ~(1 << i);
    int ans=num&mask;
    cout<<"After clearing "<<i<<"th bit "<<ans<<endl;
}

unsigned int clearBitRange(unsigned int num, int r) {
    unsigned int mask = (-1 << r);
    int ans=num&mask;
    cout<<"After clearing "<<r<<" bit within range"<<ans<<endl;
}


void clearBitsInRange(int &num, int start, int end) {

    int mask = ((1 << start) - 1) | (~0 << (end + 1));


    num &= mask;
     cout<<"After clearing bits in given range we get "<<num<<endl;
}


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i;
   cout << "Enter an index value (0 based): ";
    cin >> i;

   getbit(n,i);
   setbit(n,i);
   clearBit(n,i);
   clearBitRange(10,3);

    return 0;
}
