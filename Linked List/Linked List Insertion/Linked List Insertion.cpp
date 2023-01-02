/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    // Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x)
    {
        // Your code here
        Node *p = new Node(x);
        p->next = head;
        head = p;
        //   delete p;
        return head;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {
        // Your code here
        Node *n = new Node(x);
        if (head == NULL)
        {
            head = n;
            return head;
        }
        Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = n;
        return head;
    }
};