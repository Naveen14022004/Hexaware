include<stdio.h>

void fibonacci(int n)
{
   int a=0;
   int b=1;
   int c,i=0;
   printf("%d,",a);
   printf("%d,",b);
   while(i<n-2)
   {
      c=a+b;
      printf("%d,",c);
      a=b;
      b=c;
      i++;
   }
}

void tribonacci(int n)
{
   int a=0;
   int b=0;
   int c=1;
   int i=0,d;
   printf("%d,",a);
   printf("%d,",b);
   printf("%d,",c);
   while(i<n-3)
   {
      d=a+b+c;
      printf("%d,",d);
      a=b;
      b=c;
      c=d;
      i++;
   }
}

int main()
{
   int n;
   printf("Enter No.of.Elements : ");
   scanf("%d",&n);
   printf("\nFIBONACCI SERIES : ");
   fibonacci(n);
   printf("\nTRIBONACCI SERIES : ");
   tribonacci(n);
   printf("\n");
   return 0;
}

