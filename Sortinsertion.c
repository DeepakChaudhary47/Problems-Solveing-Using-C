#include <stdio.h>

void
pArr (int *A, int n)
{
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", A[i]);
    }
  printf ("\n");
}

void
Sortinsert (int *A, int n)
{
  int key, j;
  for (int i = 1; i <= n - 1; i++)
    {
      key = A[i];
      j = i - 1
	//loops for each passes..
	while (j >= 0 && A[j] > key)
	{
	  A[j + 1] = A[j];
	  j--;
	}
      A[j + 1] = key;

    }

}

int
main ()
{
  int A[] = { 12, 45, 77, 9, 2, 3, 5, 66, 111, 789, 45, 554 };
  int n = 12;
  pArr (A, n);
  Sortinsert (A, n);
  pArr (A, n);
  return 0;
}
