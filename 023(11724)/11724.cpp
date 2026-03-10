#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void DFS(int Node , vector<vector<int>> &Graph , vector<bool> &visited);


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<bool> visited(N+1, false);
    vector<vector<int>> Graph(N+1);


    for(int i=0; i<M; i++){
        int node1, node2;
        cin >> node1 >> node2;
        Graph[node1].push_back(node2);
        Graph[node2].push_back(node1);
    }

    int result = 0;

    for(int i=1; i<=N; i++){
        if(!visited[i]){
            DFS(i, Graph, visited );
            result++;
        }
    }

    cout << result;

    return 0;
}

void DFS(int Node , vector<vector<int>> &Graph , vector<bool> &visited){
    if(visited[Node]) return;

    visited[Node] = true;

    for(int i: Graph[Node]){
        DFS(i, Graph , visited);
    }

    return;
}
