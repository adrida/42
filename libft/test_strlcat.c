#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main(int ac, char **av)
{
  char dest[] = "old";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 11);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
