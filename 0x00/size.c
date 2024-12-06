#include <stdio.h>

int main(void)
{
    int age;
    float pi;
    double large_pi;
    char grade;
    _Bool is_student;

    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of _Bool: %lu byte\n", sizeof(_Bool));

    // You can also use sizeof with variables:
    printf("Size of variable 'age': %lu bytes\n", sizeof(age));
    printf("Size of variable 'pi': %lu bytes\n", sizeof(pi));

    return (0);
}
