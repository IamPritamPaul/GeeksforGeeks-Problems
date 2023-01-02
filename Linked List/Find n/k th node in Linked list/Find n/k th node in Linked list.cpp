

/*The structure of the node is
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
int fractional_node(struct Node *head, int k)
{
    int l = length(head);
    // cout<<"Length : "<<l<<endl;
    int x;
    if (l % k == 0)
        x = l / k;
    else
        x = l / k + 1;
    int idx = 1;
    Node *ptr = head;
    // cout<<endl<<x<<endl;
    while (idx < x)
    {
        idx++;
        ptr = ptr->next;
    }
    // cout<<idx<<endl;
    return ptr->data;
}