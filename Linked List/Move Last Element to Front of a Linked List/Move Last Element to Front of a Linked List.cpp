// User function Template for C++

class Solution
{
public:
    ListNode *moveToFront(ListNode *head)
    {
        if (head->next == NULL)
            return head;
        ListNode *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        ListNode *p = temp->next;
        temp->next = NULL;
        p->next = head;
        head = p;
        return head;
    }
};