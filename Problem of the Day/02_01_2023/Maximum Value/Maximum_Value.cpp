// User function Template for C++
/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

class Solution
{
public:
    void helper(vector<int> &res, Node *root, int d)
    {
        if (!root)
            return;
        if (d == res.size())
            res.push_back(root->data);
        else
            res[d] = max(res[d], root->data);
        helper(res, root->left, d + 1);
        helper(res, root->right, d + 1);
    }
    vector<int> maximumValue(Node *node)
    {
        vector<int> ans;
        helper(ans, node, 0);
        return ans;
    }
};