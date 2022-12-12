#include <iostream>
#include <string>

using namespace std;

class Testing {
    public:
        Testing(string myName) {
            cout << "Hello World!" << myName << endl;
            m_object++;
        }
        int GetCurrentCount() {
            return m_object;
        }
    private:
        static int m_object;
};

int main( void ) {
    cout << "Hello World!";
    Testing test("test");
    cout << test.GetCurrentCount() << endl;
    return 0;
}

