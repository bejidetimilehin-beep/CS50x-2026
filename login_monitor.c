#include <stdio.h>

int main(void)
{
    int total_attempts;
    int failed_attempts = 0;
    int successful_attempts = 0;
    int status;

    printf("========================================\n");
    printf("     SENTINEL LOGIN ATTEMPT MONITOR     \n");
    printf("========================================\n");

    printf("\nHow many login attempts do you want to record? ");
    scanf("%d", &total_attempts);

    if (total_attempts <= 0)
    {
        printf("Invalid number of attempts!\n");
        return 1;
    }

    for (int i = 1; i <= total_attempts; i++)
    {
        printf("\nLogin Attempt %d\n", i);
        printf("Enter status (1 = Successful, 0 = Failed): ");

        scanf("%d", &status);

        if (status == 1)
        {
            successful_attempts++;
            printf("Login successful.\n");
        }
        else if (status == 0)
        {
            failed_attempts++;
            printf("Warning: Failed login detected!\n");
        }
        else
        {
            printf("Invalid status. Attempt not counted.\n");
        }
    }

    printf("\n========================================\n");
    printf("             SECURITY REPORT            \n");
    printf("========================================\n");

    printf("Total attempts recorded: %d\n", total_attempts);
    printf("Successful logins: %d\n", successful_attempts);
    printf("Failed logins: %d\n", failed_attempts);

    if (failed_attempts >= 3)
    {
        printf("\nSECURITY ALERT: Multiple failed login attempts detected!\n");
    }
    else
    {
        printf("\nNo major login alert detected.\n");
    }

    printf("\nThank you for using Sentinel Login Monitor!\n");

    return 0;
}