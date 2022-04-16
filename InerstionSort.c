#include<stdio.h>
void insertion_sort(int a[],int n)
{
   int t ,shift=0,comp=0;

   for(int i=1;i<n;i++)
   {
      t=a[i];
      int j=i-1;

      while(j>=0 && a[j]>t)
      {
          shift++;
          comp++;

          a[j+1]=a[j];
          j=j-1;
      }
      shift++;
      a[j+1]=t;
   }

   for(int i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
   printf("\nshifts = %d",shift);
printf("\ncomparison = %d",comp);

}
int main()
{

         
         int n;
         int t;

         printf("enter number of test cases\n");
         scanf("%d",&t);

         while(t>0)
         {

         printf("\nenter number of elements\n");
         scanf("%d",&n);
         int a[n];
         for(int i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
         }
         insertion_sort(a,n);

         t--;
         }
         return 0;
}