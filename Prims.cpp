//USING PRIORITY QUEUE

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<int,int> iPair;


void printgraph(vector<vector<int>>graph , int V)
{
      for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cout<<graph[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int primMST(vector<vector<int>>graph ,int s, int V)
{

   priority_queue< iPair , vector<iPair> , greater<iPair>>pq;
   vector<bool>visited(V,false);
   vector<int>weight(V,INT16_MAX);

   weight[s]=0;
   pq.push(make_pair(weight[s],s));

   while(pq.empty()==false)
   {
    int u = pq.top().second;
    pq.pop();

    if(!visited[u])
    {
        visited[u]=true;
        for(int i=0;i<V;i++)
        {
            if(!visited[i] && graph[u][i]!=0 && graph[u][i]<weight[i])
            {
                weight[i]=graph[u][i];
                pq.push(make_pair(weight[i],i));
            } 
        }
    }
   }

   int sum=0;
   for(auto i:weight)
   {
    sum+=i;
   }
   return sum;


   
 
   
}
int main()
{
    int V,u,s;
    cout<<"\nEnter number of vertices";
    cin>>V;
    
   vector<vector<int>>graph(V,vector<int>(V));

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cout<<"\nEnter weight for edge "<<i<<" "<<j<<endl;
            cin>>u;
           graph[i][j]=u;
        }
    }
    printgraph(graph,V);
    cout<<"Enter source :";
    cin>>s;
    cout<<endl<<"Minimum Spanning Tree Weight: ";
    cout<<primMST(graph,s,V);
}