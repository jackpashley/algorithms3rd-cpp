#include<stdio.h>
#include<iostream>

void merge(int (&A)[10], int p, int q, int r) {
  int n_one = q - p + 1;
  int n_two = r - q;
  int L_Length = n_one + 1;
  int R_Length = n_two + 1;
  int* L = new int[L_Length];
  int* R = new int[R_Length];
  for (int i = 1; i < n_one; i++)
    L[i] = A[p + i - 1];
  for (int j = 1; j < n_two; j++) {
    R[j] = A[q + j];
  }
  printf("Print R: \n");
  for (size_t i = 0; i < R_Length; i++)
      std::cout << R[i] << " ";
  printf("\n"); printf("Print L: \n");
  for (size_t i = 0; i < L_Length; i++)
      std::cout << L[i] << " ";
  // Add sentinel cards
  L[L_Length - 1] = 99;
  R[R_Length - 1] = 99;
  int i = 1;
  int j = 1;
  for (int k = p; k < r; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    }
    else if (A[k] == R[j]) {
      j++;
    }
  }
  delete[] R;
  delete[] L;
}

int main(void) {
  // A => is an array
  // p, q, r => indices of array such that p <= q < r
  // Takes O(n)
  int A [10] = {5, 5, 6, 8, 9, 10,3,4,7,10};
  merge(A, 0, 5 ,10);

  return 0;
}
