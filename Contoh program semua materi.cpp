#include <iostream>
#include <cstring>
using namespace std;

struct Person {
    char name[50];
    int age;
};

void printPerson(Person *p) {
    cout << "Name: " << p->name << endl;
    cout << "Age: " << p->age << endl;
}

int main() {
    Person p1;
    strcpy(p1.name, "John");
    p1.age = 30;

    Person p2 = {"Jane", 25};

    printPerson(&p1);
    printPerson(&p2);

    char *str1 = "Hello";
    char *str2 = "World";
    char buffer[50];

    strcpy(buffer, str1);
    strcat(buffer, " ");
    strcat(buffer, str2);

    CString cstr(buffer);
    cout << "CString: " << cstr.GetString() << endl;

    int x = 10;
    int *ptr = &x;

    cout << "x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}

