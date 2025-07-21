#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter grade: ");
    scanf("%f", &s.grade);

    printf("\nStudent Details:\n");
    printf("Name: %s\nAge: %d\nGrade: %.2f\n", s.name, s.age, s.grade);

    return 0;
}

