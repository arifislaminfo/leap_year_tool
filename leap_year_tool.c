#include <stdio.h>

int is_leap_year(int year) {
    if (year % 400 == 0) {
        return 1;
    }
    if (year % 100 == 0) {
        return 0;
    }
    return year % 4 == 0;
}

void check_single_year(void) {
    int year;
    printf("\nEnter a year: ");

    if (scanf("%d", &year) != 1) {
        printf("Invalid input. Please enter a valid integer year.\n");
        return;
    }

    if (is_leap_year(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

void check_year_range(void) {
    int start;
    int end;
    int i;
    int found = 0;

    printf("\nEnter start year: ");
    if (scanf("%d", &start) != 1) {
        printf("Invalid input for start year.\n");
        return;
    }

    printf("Enter end year: ");
    if (scanf("%d", &end) != 1) {
        printf("Invalid input for end year.\n");
        return;
    }

    if (start > end) {
        printf("Start year cannot be greater than end year.\n");
        return;
    }

    printf("\nLeap years from %d to %d:\n", start, end);
    for (i = start; i <= end; i++) {
        if (is_leap_year(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main(void) {
    int choice;

    while (1) {
        printf("\n=== Leap Year Tool ===\n");
        printf("1. Check a single year\n");
        printf("2. List leap years in a range\n");
        printf("3. Exit\n");
        printf("Choose an option (1-3): ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                check_single_year();
                break;
            case 2:
                check_year_range();
                break;
            case 3:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Please choose a valid option (1-3).\n");
        }
    }
}
