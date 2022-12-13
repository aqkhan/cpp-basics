#include <iostream>
#include <string>

using namespace std;

class Debug {
    public:
        // Constructor
        Debug(string param) {
            cout << "Hello from the constructor! Method parameter here: " << param << endl;
            incrementObjCount();
        }

        // Deconstructor
        ~Debug() {
            cout << "Deconstructor invoked!" << endl;
        }

        // Getter method
        static int GetObjectCount() {
            return m_objCount;
        }
    private:
        // Define a static variable to keep a count of the number of objects created
        static int m_objCount;

        // Define a static method to increment the count
        static void incrementObjCount() {
            m_objCount++;
        }
};


int Debug::m_objCount = 0;

int main( void ) {
    cout << "Main function invoked!" << endl;
    
    Debug test("Some parameter here");

    cout << "Number of objects created: " << Debug::GetObjectCount() << endl;
    return 0;
}