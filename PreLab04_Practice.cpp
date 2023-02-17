#include <iostream>

using namespace std ;

class Example {
    private :
        // private instance variables
        int id;
        string name;

    public :
        // Default constructor
        Example() {
            cout << "Default Constructor called " << endl;
            this -> id = -1;
            this -> name = "N/A";
        }

        // Parameterized constructor
        Example(int ID, string NAME) {
            cout << "Parameterized Constructor called " << endl ;
            this -> id = ID ;
            this -> name = NAME ;
        }

        // Copy constructor
        Example(Example &e) {
            cout << "Copy Constructor called " << endl ;
            this -> id = e. getID () ;
            this -> name = e. getName () ;
        }

        // GETTERS AND SETTERS FOR THIS EXAMPLE
        int getID() const {
            return this -> id ;
        }
        string getName() const {
            return this -> name ;
        }

        void setID(int ID) {
            this -> id = ID ;
        }

        void setName(int NAME) {
            this -> name = NAME ;
        }

        // prindID is defined inside class definition
        void printID() {
            cout << "ID of example is: " << this -> id ;
            cout << endl ;
        }

        // printName is not defined inside class definition
        void printName() ;
};


// Definition of printName outside of class using scope resolution
void Example :: printName() {
    cout << "Name of example is " << this -> name << endl ;
}


int main() {

    // call to the default constructor
    Example obj1(); // once this is called , we can access everything inside of example class .
    // obj1 is an instance of the class Example


    // call to the parametrized constructor
    Example obj2(125, "xyz"); // once this is called , we can access everything inside of example class .
    // obj2 is an instance of the class Example

    // call to the copy constructor
    Example obj3(obj2); // once this is called , we can access everything inside of example class .
    // obj3 is an instance of the class Example

    // obj3 was created with same id and name as obj2

    return 0;
}
