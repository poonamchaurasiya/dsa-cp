#include<iosteram>
#include<vector>
using namespace std;
DFSRec(adj,s,visited,parent)
{
    visited[s] = true;
    for (int i = 0; i < adj[s].size(); i++)
    {
        if (visited[adj[s][i]] == false)
        {
            if (DFSRec(adj, adj[s][i], visited, s) == true)
            {
                return true;
            }
        }
        else if (adj[s][i] != parent)
        {
            return true;
        }
    }
    return false;
}
DFS(adj,V)
{
    visited[v] ={false,false,false,false,false,false,false,false,false,false};
    for (int i = 0; i < v; i++)    {
        if (visited[i] == false)
        {
            if (DFSRec(adj, i, visited, -1) == true)
            {
                return true;
            }
        }
    }
    return false;
}