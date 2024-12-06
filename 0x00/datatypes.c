#include <stdio.h>

int main(void)
{
    int age = 25;             // Integer
    float pi = 3.14;          // Float
    double large_pi = 3.14159; // Double
    char grade = 'A';         // Character
    _Bool is_student = 1;     // Boolean (1 = true)

    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Large Pi: %.5f\n", large_pi);
    printf("Grade: %c\n", grade);
    printf("Is Student: %d\n", is_student);

    return 0;
}
