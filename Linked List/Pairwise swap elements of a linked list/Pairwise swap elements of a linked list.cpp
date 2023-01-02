/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution
{
public:
    Node *pairWiseSwap(struct Node *head)
    {
        Node *p = head;
        if (head->next == NULL)
            return head;
        Node *q = p->next;
        if (q->next == NULL)
        {
            q->next = p;
            p->next = NULL;
            return q;
        }
        Node *r = q->next;
        head = q;
        if (r == NULL)
        {
            q->next = p;
            p->next = NULL;
            return head;
        }
        while (r != NULL)
        {
            q->next = p;
            q = r->next;
            if (q == NULL)
                break;
            p->next = q;
            p = r;
            r = q->next;
        }
        if (q == NULL)
        {
            p->next = r;
            return head;
        }
        if (r == NULL)
        {
            q->next = p;
            p->next = NULL;
            return head;
        }
    }
};