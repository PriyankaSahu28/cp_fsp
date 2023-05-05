#include <iostream>

using namespace std;
void dec_rec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";

   dec_rec(n-1);
}

void inc_rec(int n){
    if(n==0){
        return;
    }
   inc_rec(n-1);
   cout<<n<<" ";

}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;


cout<<"In decreasing order ";
cout<<"/n";
   dec_rec(n);
   cout<<endl;
   cout<<"In increasing order ";
cout<<"/n";
  inc_rec(n);
   cout<<endl;
    return 0;
}
