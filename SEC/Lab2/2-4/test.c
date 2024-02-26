#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
  char str[256] = {"B"};
  printf("%d\n", strtol(str, NULL, 10));
  //x += 2147483648
}