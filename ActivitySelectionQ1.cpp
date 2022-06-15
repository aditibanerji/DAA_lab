#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxActivities(vector<pair<int,int>>arr , int n)
{
    sort(arr.begin(), arr.end());
     int prev=0,res=1;
     vector<pair<int,int>>final;
     final.push_back(make_pair(arr[0].first,arr[0].second));

     for(int curr=1;curr<n;curr++)
     {
        if(arr[curr].first>=arr[prev].second)
        {
           final.push_back(make_pair(arr[curr].first,arr[curr].second));
            res++;
            prev=curr;
        }
     }
  
     cout<<"\nList of selected acitivites :"<<endl;
     for(int i=0;i<final.size();i++)
     {
         cout<<final[i].first<<" "<<final[i].second<<endl;
     }
     return res;
}
 

int main()
{
    int n,s,e;
    cout<<"\nEnter number of activites";
    cin>>n;
 vector<pair<int,int>>arr;

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter start time and finish  time";
        cin>>s>>e;
        arr.push_back(make_pair(s,e));
    }
   cout<<"Number of non-conflicting attivities : "<<maxActivities(arr,n);
   return 0;

}