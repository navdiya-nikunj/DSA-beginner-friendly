#include <stdio.h>
#include <limits.h>
int main(void) {
  int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
  int n = 8;
  int max_so_far = INT_MIN;
  int max_ending_here = 0;
  for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
  printf("%d",max_so_far);
}