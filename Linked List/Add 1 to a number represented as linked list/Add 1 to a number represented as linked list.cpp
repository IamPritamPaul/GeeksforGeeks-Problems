// User function template for C++

/*

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

class Solution
{
public:
    Node *reverse_list(Node *head)
    {
        Node *prev_node = NULL;
        Node *curr_node = head;
        Node *next_node = NULL;
        while (curr_node != NULL)
        {
            next_node = curr_node->next;
            curr_node->next = prev_node;
            prev_node = curr_node;
            curr_node = next_node;
        }
        return prev_node;
    }
    Node *addOne(Node *head)
    {
        head = reverse_list(head);
        head->data = head->data + 1;
        if (head->data < 10)
        {
            head = reverse_list(head);
            return head;
        }
        else
        {
            Node *p = head;
            Node *q = p;
            p->data = 0;
            p = p->next;
            int carry = 1;
            while (p != NULL)
            {
                q = p;
                p->data = carry + p->data;
                if (p->data < 10)
                {
                    carry = 0;
                    p = NULL;
                    continue;
                }
                carry = 1;
                p->data = 0;
                p = p->next;
            }
            if (carry == 1)
            {
                Node *temp = new Node(1);
                q->next = temp;
            }
            head = reverse_list(head);
            return head;
        }
    }
};