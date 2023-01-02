

/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
void deleteAlt(struct Node *head)
{
    Node *p = head;
    Node *q = p->next;
    while (p != NULL && q != NULL)
    {
        p->next = q->next;
        if (p->next != NULL)
            p = p->next;
        q->next = NULL;
        q = p->next;
    }
}