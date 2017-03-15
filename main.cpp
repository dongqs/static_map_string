#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;


class Foo
{
public:
    static const size_t sc = 5;

    static const size_t bar()
    {
        cout << sc << endl;

        vector<size_t> v = {sc};

        map<size_t, size_t> m0 = {{sc, sc}};
        //map<string, size_t> m1 = {{"ooxx", sc}};
        map<string, size_t> m2 = {{"ooxx", size_t(sc)}};

        return sc;
    }
};

int main()
{
    Foo foo;
    cout << foo.bar() << endl;
    return 0;
}
