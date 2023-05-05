#include<iostream>
using namespace std;
void findUniqueNumbers(int arr[], int n, int& x, int& y) {
    int xor_result = 0;
    for (int i = 0; i < n; i++) {
        xor_result ^= arr[i];
    }

    int rightmost_set_bit = xor_result & (-xor_result);

    x = 0;
    y = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] & rightmost_set_bit) != 0) {
            x ^= arr[i];
        }
        else {
            y ^= arr[i];
        }
    }
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 2, 6, 10};
int n = sizeof(arr) / sizeof(arr[0]);
int x, y;

findUniqueNumbers(arr, n, x, y);

cout << "The two unique numbers are: " << x << " and " << y << endl;

}
