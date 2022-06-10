//USING PRIORITY QUEUE

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef pair<int, int> iPair;


void dijkstra(vector<vector<int>>graph , int s , int V)
{
    priority_queue< iPair , vector<iPair> , greater<iPair>> pq;
    vector<int>dist (V,INT16_MAX);
    pq.push(make_pair(0,s));
    dist[s]=0;

    while(pq.empty()==false)
    {
        int u = pq.top().second;
        pq.pop();

        for(int i=0;i<V;i++)
        {
            if(graph[u][i]!=0)
            {
                if(dist[i]>dist[u]+graph[u][i])
                {
                    dist[i]=dist[u]+graph[u][i];
                    pq.push(make_pair(dist[i],i));
                }
            }
        }

    }
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);

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
           cout<<"\nEnter weight from  "<<i<<" "<<j<<endl;
           cin>>u;
           graph[i][j]=u;
       }
   }
   cout<<"\nEnter source vertex";
   cin>>s;
   dijkstra(graph,s,V);

}