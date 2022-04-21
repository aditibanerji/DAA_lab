#include<iostream>
using namespace std;
int comp=0;

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

       comp++;
        if(L[i]<=R[j])
        {
            
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
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        
        int m= l+ (r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
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
        int l=0,r=n-1;
        mergesort(a,0,n-1);
        cout<<"inversion :"<<endl;
        for(int i=0;i<n;i++)
        {
           cout<<a[i]<<" ";
        }
        cout<<"\ncomparison = "<<comp<<endl;
 t--;
    }

}