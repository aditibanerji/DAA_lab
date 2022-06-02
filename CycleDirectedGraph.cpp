#include<iostream>
#include<vector>
using namespace std;
void addedge(vector<int>adj[], int u , int v)
{
    adj[u].push_back(v);
}
bool DFSrec(vector<int>adj[], int s , bool visited[] , bool recst[])
{
    visited[s]=true;
    recst[s]=true;

    for(int u:adj[s])
    {
        if(visited[u]==false && DFSrec(adj,u,visited,recst))
        {
            return true;
        }
        else if(recst[u]==true)
        {
            return true;
        }

    }
    recst[s]=false;
    return false;
}
bool DFS(vector<int>adj[],int v,bool visited[],bool recst[])
{
   
     for(int i=0;i<v;i++)
     {
         if(visited[i]==false)
         {
             if(DFSrec(adj,i,visited,recst)==true)
             {
                 return true;
             }
         }
     }

}
void printgraph(vector<int>adj[] , int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<"\nElement connected to "<<i<<"-> "; 
        for(int x:adj[i])
        {
            cout<<x<<" ";
        }
    }
}
int main()
{
    int V,u,s,eg;
    cout<<"Enter number of vertices";
    cin>>u;
    cout<<"Enter number of edges";
    cin>>eg;
    V=u;
   
    vector<int>adj[V];
    bool visited[V];
    bool recst[V]; 
   int v;
    for(int i=0;i<eg;i++)  
    {
        cout<<"\nEnter edge: ";
        cin>>u>>v;
        addedge(adj,u,v);
    }
    printgraph(adj,V);
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
        recst[i]=false;
    }
    cout<<"Enter source index";
    cin>>s;

   if( DFSrec(adj,s,visited,recst))
   {
       cout<<"\nYes Cycle";
   }
   else
   {
       cout<<"\nNo Cycle";
   }

   if(DFS(adj,V,visited,recst))
   {
       cout<<"\nYes Cycle";
   }
   else
   {
       cout<<"\nNo Cycle";
   }
}
