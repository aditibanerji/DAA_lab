#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool mycmp(const pair<int,int>&a, const pair<int,int>&b)
{
    double r1= (double)a.first/a.second;
    double r2 = (double)b.first/b.second;
    return r1>r2;
}
double fknaps(int w , vector<pair<int,int>>arr , int n)
{
    sort(arr.begin(),arr.end() , mycmp);
    double res=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i].second<=w)
        {
            res += arr[i].first;
            w = w-arr[i].second;
        }
        else
        {
            res+= arr[i].first *((double)w/arr[i].second);
            break;
        }
    }
    return res;
}

int main()
{
    int n,w;
    int wgt,val;
    cout<<"\nEnter number of items";
    cin>>n;
    cout<<"\nEnter weigth of knapsack";
    cin>>w;
    vector<pair<int,int>>arr;

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter value and weight of item "<<i+1<<endl;
        cin>>val>>wgt;
        arr.push_back(make_pair(val,wgt));
    }
    cout<<"Maximum Value : "<<fknaps(w,arr,n);
    return 0;

}