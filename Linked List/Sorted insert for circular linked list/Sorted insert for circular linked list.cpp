/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }

};
 */

// This function should return head of
// the modified list
class Solution
{
public:
    Node *sortedInsert(Node *head, int data)
    {
        Node *p = head;
        if (p == NULL)
        {
            Node *n = new Node(data);
            n->next = n;
            head = n;
            return head;
        }
        else if (p->data >= data)
        {
            Node *n1 = new Node(data);
            swap(p->data, n1->data);
            n1->next = head->next;
            head->next = n1;
        }
        else
        {
            while (p->next != head && p->next->data < data)
            {
                p = p->next;
            }
            Node *n2 = new Node(data);
            n2->next = p->next;
            p->next = n2;
        }
        return head;
    }
};