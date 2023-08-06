#include <stdio.h>

int main() {
    char dayCode;

    printf("Enter the first letter of the day (M for Monday, T for Tuesday, W for Wednesday, etc.): ");
    scanf(" %c", &dayCode);

    switch (dayCode) {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
             printf("Thursday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
        case 's':
            printf("Saturday\n");
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
