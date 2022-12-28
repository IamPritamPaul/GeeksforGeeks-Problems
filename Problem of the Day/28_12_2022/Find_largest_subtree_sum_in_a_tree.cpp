#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
struct Node *newNode(int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int solution(Node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }
    int currSum = root->data + solution(root->left, ans) + solution(root->right, ans);
    ans = max(ans, currSum);
    return currSum;
}
int Find_Largest_Subtree_sum_in_a_Tree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans = INT_MIN;
    solution(root, ans);
    return ans;
}
int main()
{
    Node *root = newNode(1);
    root->left = newNode(-2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(-6);
    root->right->right = newNode(2);
    cout << Find_Largest_Subtree_sum_in_a_Tree(root);
}