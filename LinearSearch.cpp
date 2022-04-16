#include <iostream>
using namespace std;

int main()
{
   int n,s,key;
   int count=0,pr=1;
  

   cout<<"Enter the Number of test case"<<endl;
   cin>>n;

   for(int i=0;i<n;i++)
   {
      count=0;
       cout<<"Enter size of array"<<endl;
       cin>>s;
       int arr[s];

       cout<<"Enter "<<s<<" number of elements in array"<<endl;
       for(int j=0 ;j<s;j++)
       {
            cin>>arr[j];
       }
       cout<<"enter key value to be searched"<<endl;
       cin>>key;
      
      for(int k=0 ; k<s ;k++)
      {
         
         if(arr[k]==key)
         {
            count++;
             pr=0;
            cout<<"Present "<<count/2<<endl;
            break;
         }
         else
         {
           
            count++;
         }
      }
      if(pr==1)
      {
         cout<<"Not present "<<count/2<<endl;
      }

   }
}