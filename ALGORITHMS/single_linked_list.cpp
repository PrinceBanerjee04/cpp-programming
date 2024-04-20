class Node
{
public:
    int data;
    Node *next;
};
void printlist(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
