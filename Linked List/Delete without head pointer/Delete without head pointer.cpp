/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution
{
public:
    // Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        Node *p = head;
        if (p->data == del->data)
        {
            head = p->next;
            return;
        }
        Node *q;
        while (p->data != del->data)
        {
            q = p;
            p = p->next;
            //   if(p->data==del->data) break;
        }
        q->next = p->next;
    }
};