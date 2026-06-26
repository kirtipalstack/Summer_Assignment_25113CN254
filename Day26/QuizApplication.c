#include <stdio.h>
#include <string.h>

int main() {
    char answer[30];
    int score = 0;

    printf("----- Quiz Application -----\n");

    printf("1. What is the capital of India?\n");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "New Delhi") == 0)
        score++;

    printf("2. How many days are there in a week?\n");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "7") == 0)
        score++;

    printf("3. Which language is used in this program?\n");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "C") == 0 || strcmp(answer, "c") == 0)
        score++;

    printf("\nYour Score = %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}