#include<iostream>
#include<algorithm>
using namespace std;
void heapify(int *a,int n,int i)
{
    int c1=2*i+1;
    int c2=2*i+2;
    int maximum=i;

    if(c1<n && a[c1]>a[maximum])
    {
        maximum=c1;
    } 
    if(c2<n && a[c2]>a[maximum])
    {
        maximum=c2;
    }
    if(maximum!=i)
    {
       swap(a[i],a[maximum]);
       heapify(a,n,maximum);

    }
}
void buildheap(int *a,int n)
{
    for(int i=n/2;i>=0;i--)
    {
        heapify(a,n,i);
    }
}
void heapsort(int a[],int n)
{
    buildheap(a,n);

   for(int i=n-1; i>0 ;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    } 
    

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    heapsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
