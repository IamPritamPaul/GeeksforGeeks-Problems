

/*Structure of the node of the linled list is as

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
// your task is to complete this function
// function should return sum of last n nodes
int length_of_list(Node *head)
{
    int len = 0;
    Node *p = head;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}
int sumOfLastN_Nodes(struct Node *head, int n)
{
    int length = length_of_list(head);
    Node *p = head;
    while ((length - n) != 0)
    {
        p = p->next;
        --length;
    }
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}