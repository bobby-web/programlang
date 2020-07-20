#include <iostream>
#include <string>
using namespace std;

//Define class as myClass
class myClass {
    // Specify public access
    public:
        // Declare & Define Method
        void setName(string x) {
            name=x;
        }
        string getName() {
            return name;
        }
    // Specify private access
    private:
        //Declare Class Attribute
        string name;
};
// Program Entry Point
int main () {
    // Declare / Instantaniate Object myObj From Class myClass
    myClass myObj;
    // Access setName Method with myObj Object
    myObj.setName("John");
    // Access Private Access Attribute Via Public Access Method
    cout << myObj.getName();

    return 0;
}
