#include <iostream>
#include <string>

using namespace std;

class Request {
    public:
        Request() {
            cout << "Request constructor invoked!" << endl;
        }
        ~Request() {
            cout << "Request deconstructor invoked!" << endl;
        }
    private:
        int SomeMethod () {
            return 0;
        }
};

int main () {
    cout << "Main function invoked!" << endl;
    Request test;
    return 0;
}