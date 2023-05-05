#include <iostream>

using namespace std;
int mul_rec(int a,int b){
  if(b==0){
   return 0;
  }

  return a+mul_rec(a,b-1);
}

int main()
{
    int a,b;
    cout << "Enter two number: ";
    cin >> a>>b;
    int ans=mul_rec(a,b);
    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<ans;
}