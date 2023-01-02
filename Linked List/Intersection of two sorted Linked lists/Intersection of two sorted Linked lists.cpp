

/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
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
Node *reverse(Node *head)
{
    Node *p = NULL;
    Node *c = head;
    Node *n = NULL;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}
Node *findIntersection(Node *head1, Node *head2)
{
    //     unordered_map<int, pair<int,bool>> m;
    // 	struct Node* result = NULL;

    //     Node *p=head1;
    //     while(p!=NULL){
    //         m[p->data].first++;
    //         m[p->data].second=true;
    //         p=p->next;
    //     }
    //     p=head2;
    //     while(p!=NULL){
    //         m[p->data].first++;
    //         if(m[p->data].second==true && m[p->data].first<=2){
    //             push(&result,p->data);
    //         }
    //         p=p->next;
    //     }

    Node *p = head1;
    Node *q = head2;
    Node *result = NULL;
    while (p != NULL && q != NULL)
    {
        if (p->data == q->data)
        {
            push(&result, p->data);
            p = p->next;
            q = q->next;
        }
        else if (p->data < q->data)
        {
            p = p->next;
        }
        else
            q = q->next;
    }
    return reverse(result);
}