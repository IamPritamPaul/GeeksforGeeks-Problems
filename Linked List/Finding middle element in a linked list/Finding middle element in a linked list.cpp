/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution
{
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node *fp = head;
        Node *sp = head;
        while (fp != NULL && fp->next != NULL)
        {
            fp = fp->next->next;
            sp = sp->next;
        }
        return sp->data;
    }
};