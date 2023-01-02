
#define MOD 1000000007
/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
// Should return decimal equivalent modulo 1000000007 of binary linked list
long long unsigned int decimalValue(Node *head)
{
    long long decimal = 0;
    //   head=reverse(head);
    Node *p = head;
    while (p != NULL)
    {
        decimal = (((decimal % MOD) * (2 % MOD)) % MOD) + (p->data);
        p = p->next;
    }
    return decimal % MOD;
}