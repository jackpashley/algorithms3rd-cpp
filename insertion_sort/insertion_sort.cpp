#include<stdio.h>
#include<iostream>

int main(void) {
    // Create an array of integers
    int A [7] = {1,5,3,4,9,4,3};
    // Print the array
    std::cout << "Array before sorting: " << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << A[i] << " ";
    }
    // Sort the array
    std::cout << std::endl;
    printf("Sorting the array");
    for (int j = 2; j < 7; j++) {
        int key = A[j];
        // Insert A[j] into the sorted sequence
        int i = j - 1;
        while (i > 0 && A[i] > key) {
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }

    std::cout << std::endl << "Array after sorting: " << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << A[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
