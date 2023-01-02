

/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// Function to find the length of a loop in the linked list.
int count_nodes_in_loop(struct Node *n)
{
    int res = 1;
    struct Node *p = n;
    while (p->next != n)
    {
        res++;
        p = p->next;
    }
    return res;
}

int countNodesinLoop(struct Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while ((slow != NULL) && (fast != NULL) && (fast->next != NULL))
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return count_nodes_in_loop(slow);
    }
    return 0;
}