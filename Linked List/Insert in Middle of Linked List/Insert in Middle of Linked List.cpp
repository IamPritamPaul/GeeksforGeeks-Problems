

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

Node *get_element(int x)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = x;
    new_node->next = NULL;
    return new_node;
}
int count_length(Node *head)
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
// Function to insert a node in the middle of the linked list.
Node *insertInMiddle(Node *head, int x)
{
    if (head == NULL)
    {
    }
    int length = count_length(head), l;
    if (length % 2 == 0)
    {
        l = length / 2;
    }
    else
    {
        l = length / 2 + 1;
    }
    Node *p = head;
    int idx = 1;
    while (idx < l)
    {
        p = p->next;
        idx++;
    }
    Node *temp = get_element(x);
    temp->next = p->next;
    p->next = temp;
    return head;
}