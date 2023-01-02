

/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int length(Node *head)
{
    int l = 0;
    Node *p = head;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}
int modularNode(Node *head, int k)
{
    int l = length(head);
    if (l < k)
        return -1;
    // 	cout<<"Length is: "<<l<<endl;
    int x;
    while (l != 0)
    {
        if (l % k == 0)
        {
            x = l;
            break;
        }
        l--;
    }
    // 	cout<<"X : "<<x<<endl;
    Node *p = head;
    int idx = 1;
    while (idx < x)
    {
        idx++;
        p = p->next;
    }
    return p->data;
}