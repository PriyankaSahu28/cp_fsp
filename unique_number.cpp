#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

   int arr[n];
   cout<<"Enter "<<n<<" elements in the array ";
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
  int ans=0;
  for(int i=0;i<n;i++){
     ans^=arr[i];
   }

   cout<<"Unique element of the array is "<<ans;
    return 0;
}
