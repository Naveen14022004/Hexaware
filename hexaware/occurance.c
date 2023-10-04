#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
   printf("Enter Length of String : ");
   scanf("%d",&n);
   char str[n];
   printf("Enter String : ");
   scanf("%s",&str);
   int count,i,j;
   for(i=0;i<n;i++)
   {
      	count = 0;
        char c = str[i];
        for(j=0;j<n;j++)
        {
           if(str[j] == c)
           {
              count++;
           }
        }
   }
			
   printf("Count of %c : %d\n",c,count);
   
   return 0;
}

