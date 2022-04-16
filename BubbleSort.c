#include<stdio.h>
void bubble_sort(int a[],int n)
{
  int temp, swap=0 , comp=0;

  for(int i=0;i<n-1;i++)
  {
  for(int j=0;j<n-i-1;j++)
  {
    if(a[j]>a[j+1])
    {
        swap++;
        comp++;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
  }
  }
 
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\nswaps=%d\n ",swap);
  printf("comparisons=%d ",comp);

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
        bubble_sort(a,n);

         t--;
         }
         return 0;
}