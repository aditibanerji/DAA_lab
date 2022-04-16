#include<stdio.h>
void selection_sort(int a[],int n)
{
  int pos,temp,min;
  int swap=0,comp=0;

  for(int i=0;i<n-1;i++)
  {
     pos=i;
     min=a[i];
     for(int j=i+1;j<n;j++)
     {
            if(a[j]<min)
            {
              comp++;
               min=a[j];
               pos=j;
            }

     }
     if(pos!=i)
     {
        swap++;
        temp=a[i];
        a[i]=min;
        a[pos]=temp;
     }

  }

  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }

 printf("\nswap= %d",swap);
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
       
         selection_sort(a,n);

         t--;
         }
         return 0;
}