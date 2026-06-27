#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Department: ");
        scanf("%s", e[i].department);
    }

    printf("\nEmployee Records-:\n");

    for(i = 0; i < n; i++) {
        printf("\nEmployee ID : %d", e[i].id);
        printf("\nName        : %s", e[i].name);
        printf("\nDepartment  : %s\n", e[i].department);
    }

    return 0;
}