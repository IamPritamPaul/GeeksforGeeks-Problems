/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node *head, int data)
    {
        Node *p = head;
        if (p->data > data)
        {
            Node *temp = new Node(data);
            temp->next = p;
            head = temp;
            return head;
        }
        while (p->next != NULL)
        {
            if (p->next->data < data)
            {
                p = p->next;
            }
            else
            {
                break;
            }
        }
        Node *temp = new Node(data);
        temp->next = p->next;
        p->next = temp;
        return head;
    }
};