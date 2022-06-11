#include<iostream>
#include<vector>
using namespace std;
void shortest_path(vector<vector<int>>graph , int V , int s)
{
    vector<int>dist(V,INT16_MAX);
    dist[s]=0;

    for(int count=0;count<V-1;count++)
    {
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
               if (graph[i][j] != 0)
             {
                      if (dist[j] > dist[i] + graph[i][j])
                   {
                      dist[j] = dist[i] + graph[i][j];
                   }
  
              }
            }
        }
    }
    for (int i = 0; i < V; i++)
 {
 
 cout << ": " << dist[i] << endl;
 }

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
            cout<<"\nEnter edge "<<i<<" "<<j<<endl;
            cin>>u;
            graph[i][j]=u;
        }
    }
    cout<<"\nEnter source";
    cin>>s;
    shortest_path(graph,V,s-1);
}