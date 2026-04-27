#include <stdio.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    int age;
    char course[50];
    float gpa;
};

int main() {
    struct Student students[MAX];
    int count = 0;
    int choice;
    int i, id, found;

    do {
        printf("\n===== Student Database =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= MAX) {
                printf("Database is full.\n");
            } else {
                printf("Enter Student ID: ");
                scanf("%d", &students[count].id);

                printf("Enter Name: ");
                scanf(" %[^\n]", students[count].name);

                printf("Enter Age: ");
                scanf("%d", &students[count].age);

                printf("Enter Course: ");
                scanf(" %[^\n]", students[count].course);

                printf("Enter GPA: ");
                scanf("%f", &students[count].gpa);

                count++;
                printf("Student added successfully.\n");
            }
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No student records found.\n");
            } else {
                printf("\n===== Student Records =====\n");

                for (i = 0; i < count; i++) {
                    printf("\nStudent %d\n", i + 1);
                    printf("ID     : %d\n", students[i].id);
                    printf("Name   : %s\n", students[i].name);
                    printf("Age    : %d\n", students[i].age);
                    printf("Course : %s\n", students[i].course);
                    printf("GPA    : %.2f\n", students[i].gpa);
                }
            }
        }

        else if (choice == 3) {
            printf("Enter Student ID to search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < count; i++) {
                if (students[i].id == id) {
                    printf("\nStudent found!\n");
                    printf("ID     : %d\n", students[i].id);
                    printf("Name   : %s\n", students[i].name);
                    printf("Age    : %d\n", students[i].age);
                    printf("Course : %s\n", students[i].course);
                    printf("GPA    : %.2f\n", students[i].gpa);

                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                printf("Student not found.\n");
            }
        }

        else if (choice == 4) {
            printf("Enter Student ID to update: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < count; i++) {
                if (students[i].id == id) {
                    printf("Enter new name: ");
                    scanf(" %[^\n]", students[i].name);

                    printf("Enter new age: ");
                    scanf("%d", &students[i].age);

                    printf("Enter new course: ");
                    scanf(" %[^\n]", students[i].course);

                    printf("Enter new GPA: ");
                    scanf("%f", &students[i].gpa);

                    printf("Student updated successfully.\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                printf("Student not found.\n");
            }
        }

        else if (choice == 5) {
            printf("Enter Student ID to delete: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < count; i++) {
                if (students[i].id == id) {
                    found = 1;

                    for (; i < count - 1; i++) {
                        students[i] = students[i + 1];
                    }

                    count--;
                    printf("Student deleted successfully.\n");
                    break;
                }
            }

            if (found == 0) {
                printf("Student not found.\n");
            }
        }

        else if (choice == 0) {
            printf("Exiting program...\n");
        }

        else {
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
