int main()
{
    int num = 50;
    int *ptr = &num;
    cout << ptr << endl;
    cout << *ptr << endl;

    cout << "\n";

    cout << "size of integer is " << sizeof(num) << endl;
    cout << "size of pointer is " << sizeof(*ptr) << endl;

    cout << "\n";

    cout << "before " << num << endl;
    (*ptr)++;
    cout << "after " << num << endl;

    cout << "\n";

    cout << "before p " << ptr << endl;
    ptr++;
    cout << "after p " << ptr << endl;
}
