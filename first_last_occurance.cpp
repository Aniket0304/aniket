#include<bits/stdc++.h>
using namespace std;

class Hero {
    private:
    int age;

    public:
    int health;
    char *naam;
    char name;

    // Parameterized constructor
    Hero(int age) {
        cout << "Address of the age: " << this << endl;
        this->age = age;
    }

    Hero(int health, char name) {
        this->health = health;
        this->name = name;
    }

    Hero() {
        naam = new char[20];
    }

    // Deep copy constructor
    Hero(const Hero& Nina) {
        char *ch = new char[strlen(Nina.naam) + 1];
        strcpy(ch, Nina.naam);
        this->naam = ch;
        this->health = Nina.health;
        this->name = Nina.name;
        this->age = Nina.age;
    }

    ~Hero() {
        delete[] naam;
    }

    int getage() {
        return age;
    }

    void setage(int a) {
        age = a;
    }

    void setnaam(const char naam[]) {
        strcpy(this->naam, naam);
    }

    void print() {
        cout << "Name is: " << this->naam << endl;
    }
};

int main() {
    Hero Paul;
    char naam[7] = "Aniket";

    Paul.setnaam(naam);
    Paul.print();

    Hero Tiger(Paul); // copied properties of Paul (object) in Tiger (another object)
    Tiger.print();

    Paul.naam[0] = 'T';

    Paul.print();
    Tiger.print(); // This should now correctly show the names without affecting each other

    return 0;
}
