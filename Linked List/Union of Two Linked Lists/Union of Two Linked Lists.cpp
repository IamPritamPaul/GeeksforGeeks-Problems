

/*
// structure of the node is as follows

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

};

*/
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(
        sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
struct Node *makeUnion(struct Node *head1, struct Node *head2)
{
    set<int, greater<int>> union_list;
    Node *p = head1;
    while (p != NULL)
    {
        union_list.insert(p->data);
        p = p->next;
    }
    p = head2;
    while (p != NULL)
    {
        union_list.insert(p->data);
        p = p->next;
    }
    Node *result = NULL;
    for (auto i : union_list)
    {
        push(&result, i);
    }
    return result;
}