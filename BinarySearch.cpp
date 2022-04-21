#include<iostream>
using namespace std;
int z=0;
 
int BinarySearch(int *a , int l , int r, int key)
{

    if(l>r)
    {
        return 0;
    }
    int mid = l +(r-l)/2;
    z++;
    if(a[mid]==key)
    {
       
       return mid;
    }
    else if(a[mid]<key)
    {
       
        return BinarySearch(a,mid+1,r,key);
    }
    else 
    {
        
        return BinarySearch(a,l,mid-1,key);
    }
}

int main()
{
    int n,s,key,res;
    int l,r;
    cout<<"enter number of test case"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter size of array"<<endl;
        cin>>s;
        int a[s];
        cout<<"enter "<<s<<" number of elements"<<endl;
        for(int j=0;j<s;j++)
        {
           cin>>a[j];
        }
        l=0,r=s-1;
        cout<<"enter key value to be searched"<<endl;
        cin>>key;
        res= BinarySearch(a,l,r,key);
        if(res!=0)
        {
            cout<<"Present "<<z<<endl;
            
        }
        else
        {
            cout<<"Not Present "<<s/2<<endl;
           
        }

        
    }
}