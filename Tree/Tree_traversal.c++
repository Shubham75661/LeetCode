// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
#include <stack>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        
        node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

node* buildtree(node* root){
    cout<<"Enter value ";
    int data;
    cin>> data;
    root = new node(data);
    
    if(data == -1){
        return NULL;
    }
    
    cout<<"Enter data left "<<data<<endl;
    root->left = buildtree(root->left);
    
    cout<<"Enter data for right "<<data<<endl;
    root->right = buildtree(root->right);
    
    return root;
}

void levelorder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void revlevelorder(node* root){
    queue<node*>q;
    stack<int> st;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            st.push(-1);
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            st.push(temp->data);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    
    while(!st.empty()){
        int pr = st.top();
        st.pop();
        if(pr == -1){
            cout<<endl;
        }
        else{
            cout<<pr<<" ";
        }
    }
}

// 1 2 -1 -1 3 -1 -1

int main() {
    node* root;
    root = buildtree(root);
    revlevelorder(root);

    return 0;
}