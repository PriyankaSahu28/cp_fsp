import java.util.Scanner;

public class CheckArraySortedRecursive {
    static boolean isSorted(int arr[], int n) {

        if (n == 1) {
            return true;
        }

       
        return (arr[n - 1] >= arr[n - 2]) && isArraySorted(arr, n - 1);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Input array size
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();

        // Input array elements
        int arr[] = new int[n];
        System.out.print("Enter array elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Check if array is sorted
        if (isArraySorted(arr, n)) {
            System.out.println("Array is sorted.");
        } else {
            System.out.println("Array is not sorted.");
        }
    }
}
