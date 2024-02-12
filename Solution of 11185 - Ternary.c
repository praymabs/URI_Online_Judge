#include <stdio.h>

int main() {
  long int dnum, num;
  int rem, l, i;
  int s[1000];

  while (scanf("%ld", & dnum) == 1) {
    if (dnum < 0) break;
    num = dnum;
    l = 0;
    while (dnum > 0) {
      rem = dnum % 3;
      l = l + 1;
      dnum = dnum / 3;
    }

    for (i = 0; i < l; i++) {
      rem = num % 3;
      s[i] = rem;
      num = num / 3;
    }
    if (l == 0)
      printf("0");
    for (i = l - 1; i >= 0; i--)
      printf("%d", s[i]);
    printf("\n");
  }
  return 0;
}
