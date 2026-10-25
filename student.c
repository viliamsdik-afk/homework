
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    int number = 7;
    int N = 3 + (number % 3);
    int i;
    float sum = 0;
    float average;
    struct Student *students;
    struct Student *best;

    students = malloc(N * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory error!\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter grade: ");
        scanf("%f", &students[i].grade);
    }

    best = &students[0];

    for (i = 0; i < N; i++) {
        sum = sum + students[i].grade;

        if (students[i].grade > best->grade) {
            best = &students[i];
        }
    }

    average = sum / N;

    printf("\nStudents:\n");

    for (i = 0; i < N; i++) {
        struct Student *p = &students[i];

        printf("%s, age %d, grade %.2f\n",
               p->name, p->age, p->grade);
    }

    printf("\nAverage grade: %.2f\n", average);
    printf("Best student: %s\n", best->name);
    printf("Highest grade: %.2f\n", best->grade);

    free(students);

    return 0;
}
