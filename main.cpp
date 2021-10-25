#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main()
{
    sayHi ("V", 25);
    sayHi ("Tom", 20);
    sayHi ("Mike", 30);
    sayHi ("Buba", 40);

    return 0;
}
void sayHi(string name, int age)
{
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
}
