/*
  Print elements of a linked list on console
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     Node *next;
  }
*/

class Solution
{
public:
    void display(Node *head)
    {
        // your code goes here
        Node *p = head;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
};