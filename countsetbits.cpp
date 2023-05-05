
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    int ans=0;

    //1st method
    // while(n>0){
    //   if(n&1==1){
    //     ans++;
    //   }
    //   n>>=1;
    // }


    //2nd method
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    cout<<ans;
        }
