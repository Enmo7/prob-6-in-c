#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*int n, first = 0, second = 1, result, i;
  printf("Please give an input upto you want to print series : n");
  scanf("%d", &n);
  printf("Fibonacci Series is:n");
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      result = i;
    else
    {
      result = first + second;
      first = second;
      second = result;
    }
    printf("%dn", result);
  }
  return 0;*/

   int x, i, t1 = 1, t2 = 2, nt;

    // x denotes number of terms
    // t1 denotes term 1
    // t2 denotes term 2
    // nt denotes next term

    printf("Enter the number :\n");
    scanf("%d", &x);

    printf("Iterative Method:\n ");
    for (i = 1; i <= x; ++i) {
        printf("%d, ", t1);
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
    printf("\n");

    return 0;
}
