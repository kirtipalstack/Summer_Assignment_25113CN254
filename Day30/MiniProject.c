#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

struct Student s[10];
int n=0;

void addStudent() {
    printf("Enter Roll No: ");
    scanf("%d",&s[n].roll);

    printf("Enter Name: ");
    scanf("%s",s[n].name);

    printf("Enter Marks: ");
    scanf("%f",&s[n].marks);

    n++;
}

void displayStudent() {
    int i;

    if(n==0) {
        printf("No Records Found.\n");
        return;
    }

    printf("\nStudent Records\n");

    for(i=0;i<n;i++) {
        printf("\nRoll  : %d",s[i].roll);
        printf("\nName  : %s",s[i].name);
        printf("\nMarks : %.2f\n",s[i].marks);
    }
}

int main() {
    int choice;

    do {
        printf("\nStudent Management-:");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                printf("Program Ended.");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice!=3);

    return 0;
}