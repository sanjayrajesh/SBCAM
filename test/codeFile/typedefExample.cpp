#include <iostream>

// Define a struct named 'Person'
typedef struct {
    std::string name;
    int age;
} Person;

// Define another struct named 'Point'
typedef struct {
    int x;
    int y;
} Point;

int main() {
    // Define variables of the struct types
    Person person1;
    Point point1;

    // Assign values to the struct variables
    person1.name = "John";
    person1.age = 30;

    point1.x = 10;
    point1.y = 20;

    // Print struct variable values
    std::cout << "Person: " << person1.name << ", Age: " << person1.age << std::endl;
    std::cout << "Point: (" << point1.x << ", " << point1.y << ")" << std::endl;

    return 0;
}
