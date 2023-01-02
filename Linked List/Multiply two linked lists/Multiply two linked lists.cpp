

/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/*You are required to complete this method*/
#define mod 1000000007
long long list_to_number(Node *head)
{
    long long number = 0;
    Node *p = head;
    while (p != NULL)
    {
        number = (number * 10) % mod + p->data;
        p = p->next;
    }
    return number % mod;
}
long long multiplyTwoLists(Node *l1, Node *l2)
{
    long long n1 = list_to_number(l1);
    long long n2 = list_to_number(l2);
    return (n1 * n2) % mod;
}