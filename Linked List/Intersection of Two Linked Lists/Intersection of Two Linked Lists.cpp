/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
public:
    void push(struct Node **head_ref, int new_data)
    {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->next = (*head_ref);
        (*head_ref) = new_node;
    }
    Node *reverse(Node *head)
    {
        Node *p = NULL;
        Node *c = head;
        Node *n = NULL;
        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
        return head;
    }
    Node *findIntersection(Node *head1, Node *head2)
    {
        unordered_map<int, bool> m;
        struct Node *result = NULL;

        Node *p = head2;
        while (p != NULL)
        {
            m[p->data] = true;
            p = p->next;
        }
        p = head1;
        while (p != NULL)
        {
            if (m[p->data] == true)
            {
                push(&result, p->data);
            }
            p = p->next;
        }
        return reverse(result);
    }
};