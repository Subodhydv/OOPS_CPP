class Test
{
public:

    Test()
    {
        cout << "A" << endl;
    }

    Test(const Test &t)
    {
        cout << "B" << endl;
    }

    ~Test()
    {
        cout << "C" << endl;
    }
};

int main()
{
    Test t1;

    Test t2 = t1;
}