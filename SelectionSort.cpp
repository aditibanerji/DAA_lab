#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
  int pos,temp,min;
  int swap=0,comp=0;

  for(int i=0;i<n-1;i++)
  {
     pos=i;
     min=a[i];
     swap++;
     for(int j=i+1;j<n;j++)
     {
       comp++;
            if(a[j]<min)
            {
              
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
    cout<<a[i]<<" ";
  }

 cout<<"\nswap= "<<swap<<endl;
 cout<<"comparison = "<<comp<<endl;
}
int main()
{

   
         int n;
         int t;

        cout<<"enter number of test cases"<<endl;
        cin>>t;

         while(t--)
         {

         cout<<"\nenter number of elements"<<endl;
         cin>>n;
          int a[n];
        cout<<"enter "<<n<<" number of elements"<<endl;
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
       
         selection_sort(a,n);

         
         }
         return 0;
}