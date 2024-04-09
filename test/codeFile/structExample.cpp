#include <iostream>

// Define a struct for a point in 2D space
struct Point {
    int x;
    int y;
};

// Define a struct for a student record
struct Student {
    int id;
    std::string name;
    float gpa;
};

int main() {
    // Create instances of the struct and initialize values
    Point p1 = {10, 20};
    Student s1 = {1001, "John Doe", 3.5};
    Student s2 = {1003, "Hugert", 3.5};
    s1={1002, "Sanjay Rajesh", 4.5};
    // Access and print values of the struct members
    std::cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << std::endl;
    std::cout << "Student s1: ID=" << s1.id << ", Name=" << s1.name << ", GPA=" << s1.gpa << std::endl;
    std::cout << "Student s2: ID=" << s2.id << ", Name=" << s2.name << ", GPA=" << s2.gpa << std::endl;

    return 0;
}
