#include <iostream>

using namespace std;

node *head, *tail;

void Preorder(node *root)
{
    struct node
    {
        int data;
        node* left;
        node* right;
    };
    
    //root -> data = data;
    
    if (root != tail)
    {
        cout << root -> data << " ";
        Preorder(root -> left);
        Preorder(root -> right);
    }
}
