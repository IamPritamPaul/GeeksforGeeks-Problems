

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    if (head == NULL)
        return head;
    Node *p = head;
    Node *q = head->next;
    while (p->next != NULL)
    {
        if (p->data == q->data)
        {
            p->next = q->next;
            q->next = NULL;
            q = p->next;
        }
        else
        {
            p = q;
            q = q->next;
        }
    }
    return head;
}