#include <stdio.h>

// Function to check if an array is sorted
int checkIfSorted(int A[], int n)
{
    
    if (n == 1 || n == 0) // Base case: if the array has only one element or is empty, it is sorted
        return 1;

    else if (A[n - 1] >= A[n - 2])
        return checkIfSorted(A, n - 1);// Recursive case: if the last two elements are in order, check the rest of the array

    
    return 0; // If the last two elements are not in order, the array is not sorted
}

int main()
{
    // Array to check
    int A[] = {20, 45, 7, 0,9 ,53,88};

    // Number of elements in the array
    int n = sizeof(A) / sizeof(A[0]);

    // Check if the array is sorted
    if (checkIfSorted(A, n))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
