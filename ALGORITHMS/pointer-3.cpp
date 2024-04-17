int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << "\n";

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << "\n";

    cout << &p << endl;
    cout << p2 << endl;
}
