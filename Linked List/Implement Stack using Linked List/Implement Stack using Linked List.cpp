

// Function to push an integer into the stack.
void MyStack ::push(int x)
{
    // Your Code
    StackNode *n = new StackNode(x);
    n->next = top;
    top = n;
}

// Function to remove an item from top of the stack.
int MyStack ::pop()
{
    // Your Code
    if (top == NULL)
    {
        return -1;
    }
    int p = top->data;
    top = top->next;
    return p;
}