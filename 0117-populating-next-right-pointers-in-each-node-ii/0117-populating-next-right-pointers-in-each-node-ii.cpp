/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        if(root->left!=NULL){
            if(root->right!=NULL){
               root->left->next=root->right;
            }
            else{
                Node* temp = root->next;
                while(temp!=NULL){
                    if(temp->left!=NULL){
                        root->left->next=temp->left;
                        break;
                    }
                    if(temp->right!=NULL){
                        root->left->next=temp->right;
                        break;
                    }
                    temp=temp->next;
                }
            }  
        } 
        if(root->right!=NULL){
            Node* temp=root->next;
            while(temp!=NULL){
                if(temp->left!=NULL){
                    root->right->next=temp->left;
                    break;
                }
                if(temp->right!=NULL){
                    root->right->next=temp->right;
                    break;
                }
                temp=temp->next;
            }
        }
        if(root->right!=NULL) connect(root->right);
        if(root->left!=NULL) connect(root->left);
        return root;
    }
};