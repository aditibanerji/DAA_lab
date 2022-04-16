#include<stdio.h>
int comp=0;
int swapp=0;
void quicksort(int a[],int l , int r)
{
    if(l<r)
    {
        comp++;
        int pi = partition(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}
int partition(int a[],int l , int r)
{
    int pivot = a[r];
    int i = (l-1);
    for(int j=l;j<=r-1;j++)
    {
        
        if(a[j]<pivot)
        {
            comp++;
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);
    return(i+1);
}
void swap(int *a,int *b)
{
    swapp++;
    int t = *a;
    *a = *b;
    *b=t;
}
int main()
{
    int t,n;
    printf("enter number of test cases\n");
    scanf("%d",&t);

    while(t>0)
    {
        comp++;
        printf("\nenter number of elements in array\n");
        scanf("%d",&n);
        int a[n];
        printf("enter %d elements in array\n",n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        quicksort(a,0,n-1);
        printf("sorted array : \n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\ncomparison = %d",comp);
         printf("\nswap= %d",swapp);
 t--;
    }

}