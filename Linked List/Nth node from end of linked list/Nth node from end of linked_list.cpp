

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to find the data of nth node from the end of a linked list.
int length(Node *head)
{
    int l = 0;
    Node *p = head;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}
int getNthFromLast(Node *head, int n)
{
    int l = length(head);
    if (n > l)
        return -1;
    int idx = 1;
    Node *p = head;
    while (idx <= (l - n))
    {
        p = p->next;
        idx++;
    }
    return p->data;
}