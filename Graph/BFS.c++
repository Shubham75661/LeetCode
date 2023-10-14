// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
std::vector<int> BFSsearch(std::vector<bool>&visited, std::vector<std::vector<int>>vac, int s){
        std::queue<int>q;
        std::vector<int>g;
        q.push(s);
        visited[s] = true;
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            g.push_back(u);
            
            for(int i = 0; i < vac[u].size(); i++){
                if(visited[vac[u][i]] == false){
                    q.push(vac[u][i]);
                    visited[vac[u][i]] = true;
                }
            }
            if(q.size()>=1){
                std::cout<<u<<"->";
            }
            else{
                std::cout<<u<<" ";
            }
        }
        return g;
}

int StructureArray(std::vector<std::vector<int>>vac, int s, int v){
    std::vector<bool>visited(v,false);
    std::vector<std::vector<int>>total_graph;
    int count = 0;
    std::cout<<"Graph vertises :- ";
    for(int i = 0; i<visited.size(); i++){
        if(visited[i] == false){
            count++;
            total_graph.push_back(BFSsearch(visited, vac, i));
        }
    }
    std::cout<<"\n";
    for(int i =0; i < total_graph.size(); i++){
        std::cout<<"\nGraph number "<<i<<" :- ";
        for(int j =0; j < total_graph[i].size(); j++){
            std::cout<<" "<<total_graph[i][j];
        }
    }
    return count;
}

int main() {
    // Write C++ code here
   std::vector<std::vector<int>>vac ={{1, 2},{0, 2},{1, 0},{4},{3},{6, 7},{5},{5, 8},{7}};
   int s = 0;
   int v = vac.size();
   int answer = StructureArray(vac, s, v);
   std::cout<<"\n\nnumber of graph's are :- "<<answer;
}