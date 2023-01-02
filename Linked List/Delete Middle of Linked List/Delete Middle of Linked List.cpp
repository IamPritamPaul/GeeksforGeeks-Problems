

/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
int length_of_list(Node *head)
{
    int l = 0;
    Node *p = head;
    while (p != NULL)
    {
        p = p->next;
        l++;
    }
    return l;
}
Node *deleteMid(Node *head)
{
    int length = length_of_list(head);
    // cout<<"\nLength : "<<length<<endl;
    length = length / 2 + 1;
    // cout<<"\nLength : "<<length<<endl;
    int idx = 1;
    Node *h = head;
    while (idx < length - 1)
    {
        idx++;
        h = h->next;
    }
    h->next = h->next->next;
    return head;
}