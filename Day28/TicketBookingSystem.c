#include <stdio.h>

struct Ticket
{
    char name[50];
    char destination[50];
    int seats;
};

int main()
{
    struct Ticket t;

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Destination: ");
    scanf(" %[^\n]", t.destination);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("\nTicket Details-:\n");
    printf("Passenger Name : %s\n", t.name);
    printf("Destination    : %s\n", t.destination);
    printf("Seats Booked   : %d\n", t.seats);

    return 0;
}