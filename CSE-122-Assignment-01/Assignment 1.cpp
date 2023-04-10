#include <iostream>
#include <utility>

using namespace std;

class Animal {
protected:
    int age;
    bool alive;
    long id;
    pair<double, double> location;
public:
    Animal(): age(0), alive(true), id(rand()), location(make_pair(0.0, 0.0)) {}
    Animal(int x, double m, double n): age(x), alive(true), id(rand()), location(make_pair(m, n)) {}
    virtual void move(double m, double n) {
        location.first = m;
        location.second = n;
    }
    virtual void eat() {
        cout << "Animal is eating.\n";
    }
    virtual void sleep() {
        cout << "Animal is sleeping.\n";
    }
    void setAlive(bool value) {
        alive = value;
    }
    virtual ~Animal() {}
    friend ostream& operator<<(ostream& h, const Animal& obj);
};

class Bird: public Animal {
public:
    Bird(): Animal() {}
    Bird(int x, double m, double n): Animal(x , m, n) {}
    void fly(double m, double n) {
        cout << "Bird is flying to " << m << ", " << n << endl;
        move(m , n);
    }
    void eat() {
        cout << "Bird is eating worms.\n";
    }
};

class Canine: public Animal {
public:
    Canine(): Animal() {}
    Canine(int x, double m, double n): Animal(x, m, n) {}
    void run(double m, double n) {
        cout << "Canine is running to " << m << " , " << n << endl;
        move(m, n);
    }
    void eat() {
        cout << "Canine is eating meat.\n";
    }
};

ostream& operator<<(ostream& h, const Animal& x) {
    h << "Animal " << x.id << " (age " << x.age << ", alive: " << boolalpha << x.alive << ") is at location (" << x.location.first << ", " << x.location.second << ")";
    return h;
}

int main() {
    Bird obj1(2, 3.0, 4.0);
    Canine obj2(3, 5.0, 6.0);

    cout << obj1 << endl;
    cout << obj2 << endl;

    obj1.fly(10.0, 20.0);
    obj2.run(30.0, 40.0);

    obj1.eat();
    obj2.eat();

    obj1.setAlive(false);
    obj2.setAlive(false);

    cout << obj1 << endl;
    cout << obj2 << endl;

    return 0;
}
