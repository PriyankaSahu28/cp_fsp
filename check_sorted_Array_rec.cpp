#include <iostream>

using namespace std;

bool check_sorted(int n,int arr[]){

    if(n<=1){
       return true;
    }
  if(arr[n-1]<arr[n-2]){
    return false;
     }
     check_sorted(n-1,arr);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

   int arr[n];
   cout<<"Enter "<<n<<" elements in the array ";
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
 if(check_sorted(n,arr)){
    cout<<"Array is sorted ";
 }
else{
    cout<<"Array is not sorted ";
}

}
