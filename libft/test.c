#include "libft.h"
#include <stdio.h>
int main ()
{
  char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
  char *d1 = strchr(src, '\0');
  printf("%s",d1);
}
