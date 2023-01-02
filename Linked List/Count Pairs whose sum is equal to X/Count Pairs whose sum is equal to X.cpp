/*
Structure of the node of the linked list is as
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
    // your task is to complete this function
    int countPairs(struct Node *head1, struct Node *head2, int x)
    {
        unordered_set<int> s;
        while (head1 != NULL)
        {
            s.insert(head1->data);
            head1 = head1->next;
        }
        int count = 0;
        while (head2 != NULL)
        {
            if (s.find(x - head2->data) != s.end())
                count++;
            head2 = head2->next;
        }
        return count;
    }
};