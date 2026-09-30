#include <stdio.h>

int main(void)
{
    int choice;
    int severity;

    char incident[100];

    printf("========================================\n");
    printf("   SENTINEL INCIDENT RESPONSE SIMULATOR  \n");
    printf("========================================\n");

    printf("\nSelect the type of security incident:\n");
    printf("1. Unauthorized Login\n");
    printf("2. Malware Detection\n");
    printf("3. Phishing Attack\n");
    printf("4. Data Breach\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    printf("\nEnter a short description of the incident: ");
    scanf(" %99[^\n]", incident);

    printf("\nSelect severity level:\n");
    printf("1. Low\n");
    printf("2. Medium\n");
    printf("3. High\n");
    printf("4. Critical\n");

    printf("\nEnter severity (1-4): ");
    scanf("%d", &severity);

    printf("\n========================================\n");
    printf("          INCIDENT REPORT               \n");
    printf("========================================\n");

    printf("Description: %s\n", incident);

    switch (choice)
    {
        case 1:
            printf("Incident Type: Unauthorized Login\n");
            break;

        case 2:
            printf("Incident Type: Malware Detection\n");
            break;

        case 3:
            printf("Incident Type: Phishing Attack\n");
            break;

        case 4:
            printf("Incident Type: Data Breach\n");
            break;

        default:
            printf("Incident Type: Unknown\n");
            return 1;
    }

    switch (severity)
    {
        case 1:
            printf("Severity: Low\n");
            break;

        case 2:
            printf("Severity: Medium\n");
            break;

        case 3:
            printf("Severity: High\n");
            break;

        case 4:
            printf("Severity: Critical\n");
            break;

        default:
            printf("Invalid severity level.\n");
            return 1;
    }

    printf("\nRECOMMENDED RESPONSE:\n");

    if (severity >= 3)
    {
        printf("Escalate the incident immediately.\n");
        printf("Isolate affected systems where appropriate.\n");
        printf("Preserve evidence for investigation.\n");
    }
    else
    {
        printf("Investigate the incident.\n");
        printf("Document findings and monitor activity.\n");
    }

    printf("\nIncident report completed.\n");

    return 0;
}