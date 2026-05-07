#include <iostream>
using namespace std;
class cal
{
private:
    int n1;
    int n2;

public:
    cal()
    {
        cout << "enter n1";
        cin >> n1;
        cout << "enter n2";
        cin >> n2;
    }
    cal(int x, int y)
    {
        n1 = x;
        n2 = y;
    }

    int sum()
    {
        return n1 + n2;
    }
    float div()
    {
        return (float)n1 / n2;
    }
    int mod()
    {
        return n1 % n2;
    }
    int mul()
    {
        return n1 * n2;
    }
};

int main()

{

    cal c1;
    cout << "sum is " << c1.sum() << endl;
    cout << "div is " << c1.div() << endl;
    cout << "mod is " << c1.mod() << endl;
    cout << "mul is " << c1.mul() << endl;

    return 0;
}