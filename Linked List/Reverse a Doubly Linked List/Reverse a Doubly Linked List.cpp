/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *reverseDLL(Node *head)
{
    if (head->next == NULL)
        return head;
    Node *temp = NULL;
    Node *curr_node = head;
    while (curr_node != NULL)
    {
        temp = curr_node->prev;
        curr_node->prev = curr_node->next;
        curr_node->next = temp;
        curr_node = curr_node->prev;
    }
    head = temp->prev;
    return head;
}