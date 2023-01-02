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

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    Node *p = head;
    do
    {
        p = p->next;
        if (p == head)
            return true;
    } while (p != NULL);
    return false;
}