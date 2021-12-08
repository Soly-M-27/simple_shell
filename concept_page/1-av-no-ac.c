#include <stdio.h>

int main(int ac, char **av)
{
  int i, sum = 0;

  while (av[sum])
    sum++;
  printf("sum is %d\n", sum);

  for (i = 0; i < sum; i++)
    printf("av[%d]: %s\n", i, av[i]);
  return (0);
}
