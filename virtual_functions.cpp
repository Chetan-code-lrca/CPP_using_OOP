#include <iostream>
using namespace std;
class baseA 
{
    public:
    virtual void display() override {
        std::cout << "One\n";
    }
};
class derivedB : public baseA {
    public:
    void display() {
        std::cout << "Two\n";
    }
};
class derivedC : public derivedB {
    public:
    void display() {
        std::cout << "Three\n";
    }
};
int main() { 
    baseA obja;
    derivedB objb;
    derivedC objc;
    baseA* ptr[3]; 
    ptr[0] = &obja;
    ptr[1] = &objb;
    ptr[2] = &objc;

    for (int i = 0; i <= 2; i++) {
        ptr[i]->display();
    }
    return 0; 
}
