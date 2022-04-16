
#include<iostream>
#include<cmath>
using namespace std;

void jump(int a[],int s , int key)
{
    int end = sqrt(s),prev=0,flag=0;
    int comp=0;

    while(a[end]<=key && end<s)
    {
        comp++;
           prev=end;
           end = end +sqrt(s);
           if(end>s-1)
           {
               comp++;
               end=s;
          }
    }
    for(int i=prev;i<end;i++)
    {

        
        if(a[i]==key)
        {
            
            flag=1;
             cout<<"Present "<<comp<<endl;
        }
    }
    if(flag==0)
    {
        cout<<"Not present "<<comp<<endl;
    }
}
int main()
{
    int n,s,key;
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
        cout<<"enter key value to be searched"<<endl;
        cin>>key;
        jump(a,s,key);
}
}