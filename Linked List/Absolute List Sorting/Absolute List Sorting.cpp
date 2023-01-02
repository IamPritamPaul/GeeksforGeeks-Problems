/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution
{

public:
    Node *sortList(Node **head)
    {
        vector<int> arr;
        Node *p = (*head);
        while (p != NULL)
        {
            arr.push_back(p->data);
            p = p->next;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        Node *ans = NULL;
        for (int i = 0; i < arr.size(); i++)
        {
            push(&ans, arr[i]);
        }
        // return reverse(ans);
        return ans;
    }
};