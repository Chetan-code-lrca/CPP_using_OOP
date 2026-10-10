#include <array>
#include <iostream>

class Base {
public:
    virtual ~Base() = default;

    virtual void display() const {
        std::cout << "One\n";
    }
};

class DerivedB : public Base {
public:
    void display() const override {
        std::cout << "Two\n";
    }
};

class DerivedC : public DerivedB {
public:
    void display() const override {
        std::cout << "Three\n";
    }
};

int main() {
    const Base first;
    const DerivedB second;
    const DerivedC third;
    const std::array<const Base*, 3> objects{&first, &second, &third};

    for (const Base* object : objects) {
        object->display();
    }

    return 0;
}
