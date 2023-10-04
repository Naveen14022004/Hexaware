#include<stdio.h>

int main()
{
   int x,y;
   printf("ENTER 1ST NUMBER : ");
   scanf("%d",&x);
   printf("ENTER 2ND NUMBER : ");
   scanf("%d",&y);
   printf("\nBEFORE SWAPPING : %d,%d",x,y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("\nAFTER SWAPPING : %d,%d\n",x,y);
   return 0;
}

