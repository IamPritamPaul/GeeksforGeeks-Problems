/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
public:
    // Function to reverse a linked list.
    struct Node *reverseList(struct Node *head)
    {
        if (head->next == NULL)
            return head;
        Node *p = head;
        Node *c = head->next;
        head->next = NULL;
        while (c != NULL)
        {
            Node *n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
};
