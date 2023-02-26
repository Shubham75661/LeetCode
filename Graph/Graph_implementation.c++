// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <unordered_map>
#include <list>

class graph{
    public:
        unordered_map<int, list<int>> adj;
        
        void addEdge(int n, int e, bool t){
            adj[n].push_back(e);
            if(t == 0){
                adj[e].push_back(n);
            }
        }
        
        void printG(){
            for(auto i:adj){
                cout<< i.first << "-> ";
                for(auto j: i.second){
                    cout << j << ", ";
                }
                cout<<endl;
            }
        }
};

int main() {
    
    int node;
    int edges;
    
    cout<<"Enter number of Nodes ";
    cin>>node;
    
    cout<<"Enter number of Edges ";
    cin>>edges;
    
    graph g;
    cout<<"Enter your edges ";
    cout<<endl;
    for(int i = 0; i<edges; i++){
        int n, e;
        cin>>n >> e;
        g.addEdge(n, e, 0);
        cout<<endl;
    }
    g.printG();
    return 0;
}