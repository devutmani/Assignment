#include <stdio.h>

int main() {
    double principal, rate;
    int time;

    // Get the principal amount (must be between 100 and 1,000,000)
    do {
        printf("Enter the principal amount (between 100 Rs. and 1,000,000 Rs.): ");
        scanf("%lf", &principal);

        if (principal < 100 || principal > 1000000) {
            printf("Invalid input. Please enter a value between 100 Rs. and 1,000,000 Rs.\n");
        }
    } while (principal < 100 || principal > 1000000);

    // Input: Get the rate of interest (must be between 5% and 10%)
    do {
        printf("Enter the rate of interest (between 5 and 10): ");
        scanf("%lf", &rate);

        if (rate < 5 || rate > 10) {
            printf("Invalid input. Please enter a value between 5%% and 10%%.\n");
        }
    } while (rate < 5 || rate > 10);

    // Input: Get the time period (must be between 1 and 10 years)
    do {
        printf("Enter the time period (between 1 and 10 years): ");
        scanf("%d", &time);

        if (time < 1 || time > 10) {
            printf("Invalid input. Please enter a value between 1 and 10 years.\n");
        }
    } while (time < 1 || time > 10);

    // Output: Display the valid input values
    printf("\nValid Input Received:\n");
    printf("Principal: %.2f Rs.\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time Period: %d years\n", time);

    // You can also calculate simple interest if required:
    // double simple_interest = (principal * rate * time) / 100;
    // printf("The Simple Interest is: %.2f Rs.\n", simple_interest);

    return 0;
}