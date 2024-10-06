// C++ program for preorder traversals

#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *left, *right;
    Node(int v)
    {
        data = v;
        left = right = nullptr;
    }
};
void printpostorder(struct Node* node)
{
    if (node == nullptr)
        return;
    printpostorder(node->left);
    printpostorder(node->right);
    cout<<node->data<<"";
    
}
int main()
{
    struct Node* root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(2);
    cout << "postorder traversal of binary tree is: \n";
    printpostorder(root);

    return 0;
}
