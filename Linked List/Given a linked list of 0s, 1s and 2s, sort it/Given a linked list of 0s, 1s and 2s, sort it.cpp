/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node *newNode(int data)
    {
        Node *temp = (Node *)malloc(sizeof(Node));
        temp->data = data;
        temp->next = NULL;
        return temp;
    }
    Node *segregate(Node *head)
    {
        Node *ZeroD = newNode(0);
        Node *OneD = newNode(0);
        Node *TwoD = newNode(0);
        Node *zero = ZeroD;
        Node *one = OneD;
        Node *two = TwoD;
        Node *current = head;
        while (current != NULL)
        {
            if (current->data == 0)
            {
                zero->next = current;
                zero = zero->next;
            }
            if (current->data == 1)
            {
                one->next = current;
                one = one->next;
            }
            if (current->data == 2)
            {
                two->next = current;
                two = two->next;
            }
            current = current->next;
        }
        zero->next = OneD->next ? OneD->next : TwoD->next;
        one->next = TwoD->next ? TwoD->next : NULL;
        if (one->next != NULL)
            two->next = NULL;
        head = ZeroD->next;
        delete ZeroD;
        delete OneD;
        delete TwoD;
        return head;
    }
};