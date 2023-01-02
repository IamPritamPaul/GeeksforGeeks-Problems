/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution
{
public:
    int count(struct node *head, int search_for)
    {
        int count = 0;
        node *p = head;
        while (p != NULL)
        {
            if (p->data == search_for)
                count++;
            p = p->next;
        }
        return count;
    }
};