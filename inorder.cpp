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
void printinorder(struct Node* node)
{
    if (node == nullptr)
        return;
    printinorder(node->left);
    cout<<node->data<<"";
    printinorder(node->right);
}
int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    cout << "inorder traversal of binary tree is: \n";
    printinorder(root);

    return 0;
}
