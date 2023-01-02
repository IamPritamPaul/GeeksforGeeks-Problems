

/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to check whether two linked lists are identical or not.
bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node *p = head1;
    Node *q = head2;
    while (p != NULL && q != NULL)
    {
        if (p->data != q->data)
            return false;
        p = p->next;
        q = q->next;
    }
    if (p != NULL || q != NULL)
        return false;
    return true;
}