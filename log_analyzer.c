#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file;
    char line[200];

    int successful = 0;
    int failed = 0;
    int total = 0;

    printf("========================================\n");
    printf("      SENTINEL SECURITY LOG ANALYZER    \n");
    printf("========================================\n");

    file = fopen("week-01-c/security-log-analyzer/security_log.txt", "r");

    if (file == NULL)
    {
        printf("Error: Could not open the log file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        total++;

        if (strstr(line, "SUCCESS") != NULL)
        {
            successful++;
        }
        else if (strstr(line, "FAILED") != NULL)
        {
            failed++;
        }
    }

    fclose(file);

    printf("\nSECURITY REPORT\n");
    printf("----------------------------------------\n");
    printf("Total log entries: %d\n", total);
    printf("Successful logins: %d\n", successful);
    printf("Failed logins: %d\n", failed);

    if (failed >= 3)
    {
        printf("\nALERT: Multiple failed login attempts detected!\n");
    }
    else
    {
        printf("\nNo major security alert detected.\n");
    }

    printf("\nLog analysis completed successfully.\n");

    return 0;
}