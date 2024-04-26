#include <bits/stdc++.h> 
using namespace std; 
 
// Pre-processing to calculate values of memo[][] 
void dfs(int u, int p, int **memo, vector<int> &lev, int log, vector<int> *g) 
{ 
    // Using recursion formula to calculate 
    // the values of memo[][] 
    memo[u][0] = p; 
    for (int i = 1; i <= log; i++) 
        memo[u][i] = memo[memo[u][i - 1]][i - 1]; 
    for (int v : g[u]) 
    { 
        if (v != p) 
        { 
            lev[v] = lev[u] + 1; 
            dfs(v, u, memo, lev, log, g); 
        } 
    } 
} 
 
// Function to return the LCA of nodes u and v 
int lca(int u, int v, int log, vector<int> &lev, int **memo) 
{ 
    // The node which is present farthest 
    // from the root node is taken as u 
    // If v is farther from root node 
    // then swap the two 
    if (lev[u] < lev[v]) 
        swap(u, v); 
 
    // Finding the ancestor of u 
    // which is at same level as v 
    for (int i = log; i >= 0; i--) 
        if ((lev[u] - pow(2, i)) >= lev[v]) 
            u = memo[u][i]; 
 
    // If v is the ancestor of u 
    // then v is the LCA of u and v 
    if (u == v) 
        return u; 
 
    // Finding the node closest to the root which is 
    // not the common ancestor of u and v i.e. a node 
    // x such that x is not the common ancestor of u 
    // and v but memo[x][0] is 
    for (int i = log; i >= 0; i--) 
    { 
        if (memo[u][i] != memo[v][i]) 
        { 
            u = memo[u][i]; 
            v = memo[v][i]; 
        } 
    } 
 
    // Returning the first ancestor 
    // of above found node 
    return memo[u][0]; 
} 
 
