#include <iostream>
#include <string>

using namespace std;

class DebugOnly {
    public:
        // The name of the constructor method should be the same as the class name
        DebugOnly(string someParam) {
            cout << "Hello from the constructor! Parameter here: " << someParam << endl;
            incrementObjectCount();
        }

        // A simple getter method
        static int GetObjectCount() {
            return m_objectCount;
        }

        // The name of the destructor method should be the same as the class name, but with a tilde (~) in front
        ~DebugOnly() {
            cout << "Hello from the destructor!" << endl;
        }

    private:
        // A static variable is shared by all instances of the class
        static int m_objectCount;

        // The static variable declared in private scope should be modified by a static method within the scope
        static void incrementObjectCount() {
            m_objectCount++;
        }
};

// Initialize the static variable with a type and a value
int DebugOnly::m_objectCount = 0;

int main( void ) {
    cout << "Hello from the main func" << endl;
    DebugOnly testObject("SomeParam here");
    cout << "Object count: " << DebugOnly::GetObjectCount() << endl;
    return 0;
}