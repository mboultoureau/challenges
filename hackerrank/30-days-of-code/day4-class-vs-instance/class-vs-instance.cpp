using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if (initialAge < 0) {
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
        } else {
            age = initialAge;
        }
    }

    void Person::amIOld(){
        if (age < 13) {
            cout << "You are young." << endl;
        } else if (age < 18) {
            cout << "You are a teenager." << endl;
        } else {
            cout << "You are old." << endl;
        }
    }

    void Person::yearPasses(){
        age++;
    }

int main(){