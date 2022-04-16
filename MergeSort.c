#include<stdio.h>
int comp=0;
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        comp++;
        int m= l+ (r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;


    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=a[m+1+j];
    }
    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {

        if(L[i]<=R[j])
        {
            comp++;
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {

        a[k++]=L[i++];

    }
    while(j<n2)
    {

        a[k++]=R[j++];
    }
}
int main()
{
    int t,n;


    printf("enter number of test cases\n");
    scanf("%d",&t);

    while(t>0)
    {
        printf("\nenter number of elements in array\n");
        scanf("%d",&n);
        int a[n];
        printf("enter %d elements in array\n",n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int l=0,r=n-1;
        mergesort(a,0,n-1);
        printf("inversion : \n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\ncomparison = %d",comp);
 t--;
    }

}