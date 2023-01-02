/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};
*/

class Solution
{
public:
    Node *deleteNode(Node *head_ref, int x)
    {
        Node *temp = head_ref;
        if (x == 1)
        {
            head_ref = head_ref->next;
            return head_ref;
        }
        for (int i = 1; i < x - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head_ref;
    }
};