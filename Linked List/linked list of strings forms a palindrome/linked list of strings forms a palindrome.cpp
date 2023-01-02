

/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
bool check_palindrome(string s)
{
    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}
bool compute(Node *root)
{
    string s;
    Node *p;
    for (p = root; p != NULL; p = p->next)
    {
        s += p->data;
    }
    return check_palindrome(s);
}