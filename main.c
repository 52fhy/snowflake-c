#include <stdio.h>
#include "snowflake.h"

int main()
{
   int i = 0;
   do {
		printf("id=%lld\n", next_id());
		i++;
   } while (i < 10);
   
   return 0;
}