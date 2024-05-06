#include <bits/stdc++.h>
using namespace std;
 
class GFG {
 
public:
    // Adjacency list to store the edges.
    vector<vector<pair<int, int> > > adj;
 
    // To store maximum points of a path
    // starting at a node
    vector<int> dp;
 
    // Visited vector to keep trackof nodes for
    // which dp values has already been calculated
    vector<int> vis;
 
    // To store the final answer
    int ans = 0;
 
    // Function for visiting every node and
    // calculating dp values for each node.
    void dfs(int curr_node, vector<int>& points)
    {
 
        // Mark the current node as visited so
        // that it does not have to be visited again.
        vis[curr_node] = 1;
 
        // To store maximum path starting
        // at node minus lenght of edge connecting
        // that node to current node for each
        // child of current node.
        vector<int> child_nodes;
 
        // Iterating through each child
        // of current node.
        for (auto x : adj[curr_node]) {
 
            // To check whether the child has been
            // already visited or not
            if (!vis[x.first]) {
 
                // Call dfs function for the child
                dfs(x.first, points);
            }
 
            // Push the value(maximum points path
            // starting at this child node minus lenght
            // of edge) into the vector
            child_nodes.push_back(dp[x.first] - x.second);
        }
 
        // Sort the vector in decreasing order
        // to pick 2 maximum 2 values.
        sort(child_nodes.begin(), child_nodes.end(),
             greater<int>());
 
        // max1-to store maximum points path
        // starting at child node of current
        // node, max2-to store second maximum
        // points path starting at child node
        // of current node.
        int max1 = 0, max2 = 0;
        if (child_nodes.size() >= 2) {
            max1 = max(max1, child_nodes[0]);
            max2 = max(max2, child_nodes[1]);
        }
        else if (child_nodes.size() >= 1) {
            max1 = max(max1, child_nodes[0]);
        }
 
        // Calculate maximum points path passing
        // through current node.
        ans = max(ans, max1 + max2 + points[curr_node]);
 
        // Store maximum points path starting
        // at current node in dp[curr_node]
        dp[curr_node] = max1 + points[curr_node];
    }
 
    // To find maximal points path
    int MaxPointPath(int n, vector<int> points,
                     vector<vector<int> > edges)
    {
        adj.resize(n + 1);
        dp.resize(n + 1);
        vis.resize(n + 1);
 
        // Filling adajency list
        for (int i = 0; i < n - 1; i++) {
            adj[edges[i][0]].push_back(
                { edges[i][1], edges[i][2] });
            adj[edges[i][1]].push_back(
                { edges[i][0], edges[i][0] });
        }
 
        // Calling dfs for node 1
        dfs(1, points);
 
        return ans;
    }
};
 
// Driver code
int main()
{
    GFG obj;
 
    // Number of Vertices
    int n = 5;
 
    // Points at each node
    vector<int> points(n + 1);
    points[1] = 6;
    points[2] = 3;
    points[3] = 2;
    points[4] = 5;
    points[5] = 0;
 
    // Edges and their lengths
    vector<vector<int> > edges{
        { 1, 2, 10 }, { 2, 3, 3 }, { 2, 4, 1 }, { 1, 5, 11 }
    };
 
    cout << obj.MaxPointPath(n, points, edges);
    return 0;
}
