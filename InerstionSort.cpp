#include<iostream>
using namespace std;
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
      cout<<a[i]<<" ";
   }
  cout<<"\nshifts = "<<shift<<endl;
   cout<<"comparison = "<<comp<<endl;

}
int main()
{
         int n;
         int t;

         cout<<"enter number of test cases"<<endl;
         cin>>t;

         while(t>0)
         {

        cout<<"\nenter number of elements"<<endl;
        cin>>n;
         int a[n];
         cout<<"enter "<<n<<" number of elements"<<endl;
         for(int i=0;i<n;i++)
         {
            cin>>a[i];
         }
         insertion_sort(a,n);

         t--;
         }
         return 0;
}