#include<iostream>
using namespace std;
int comp=0;
int swapp=0;

void swap(int *a,int *b)
{
    swapp++;
    int t = *a;
    *a = *b;
    *b=t;
}
int partition(int a[],int l , int r)
{
    int pivot = a[r];
    int i = (l-1);
    for(int j=l;j<=r-1;j++)
    {
        comp++;
        
        if(a[j]<pivot)
        {
            
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);
    return(i+1);
}
void quicksort(int a[],int l , int r)
{
    if(l<r)
    {
        
        int pi = partition(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}

int main()
{
    int t,n;
    cout<<"enter number of test cases"<<endl;
    cin>>t;

    while(t>0)
    {
        
        cout<<"\nenter number of elements in array"<<endl;
        cin>>n;
        int a[n];
       cout<<"enter "<<n<<" elements in array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        quicksort(a,0,n-1);
        cout<<"sorted array : "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
       cout<<"\ncomparison = "<<comp<<endl;
       cout<<"swap= "<<swapp<<endl;
 t--;
    }

}