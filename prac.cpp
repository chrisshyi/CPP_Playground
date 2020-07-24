#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
#include <algorithm>
#include <numeric>
#include <functional>
#include <set>
#include <thread>
#include <unordered_set>

class Test {
    public:
        virtual void do_sth() = 0;
};

class ConcreteTest : public Test {
    public: 
        void do_sth() override {
            cout << "hello\n";
        }
};


int main()
{
    Test* test = new ConcreteTest();
    test->do_sth();
    int x = 0x10;
    cout << x << endl;
    return 0;
}
