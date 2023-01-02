

/* Link list Node
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

/*You are required to complete below method*/
Node *deleteNode(Node *head, int x)
{
    if (x == 1)
    {
        head = head->next;
        return head;
    }
    Node *p = head;
    int idx = 1;
    while (idx != x - 1)
    {
        idx++;
        p = p->next;
    }
    p->next = p->next->next;
    return head;
}