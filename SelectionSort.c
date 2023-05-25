#include <stdio.h>
void
arr (int* A, int n)
{
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", A[i]);
    }
  printf ("\n");

}


 void selection (int *A, int n)
{
  int temp, iMin;
  for (int i = 0; i < n - 1; i++)
    {
      iMin = i;
      for (int j = i + 1; j < n; j++)
	{
	  if (A[j] < A[iMin]){
	    iMin = j;
	}

    }
  temp = A[i];
  A[i] = A[iMin];
  A[iMin] = temp;
}
}

int
main ()
{
  int A[] = { 12, 56, 44, 9, 0, 3, 58 };
  int n = 7;
  arr (A, n);
  selection (A,n);
  arr(A,n);
  return 0;
}
