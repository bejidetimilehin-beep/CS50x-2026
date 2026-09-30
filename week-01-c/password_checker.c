#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char password[100];
    int score = 0;

    int has_upper = 0;
    int has_lower = 0;
    int has_digit = 0;
    int has_special = 0;

    printf("=================================\n");
    printf("   SENTINEL PASSWORD CHECKER     \n");
    printf("=================================\n");

    printf("Enter your password: ");
    scanf("%99s", password);

    int length = strlen(password);

    if (length >= 8)
    {
        score++;
    }

    for (int i = 0; password[i] != '\0'; i++)
    {
        if (isupper((unsigned char)password[i]))
        {
            has_upper = 1;
        }
        else if (islower((unsigned char)password[i]))
        {
            has_lower = 1;
        }
        else if (isdigit((unsigned char)password[i]))
        {
            has_digit = 1;
        }
        else if (ispunct((unsigned char)password[i]))
        {
            has_special = 1;
        }
    }

    score += has_upper;
    score += has_lower;
    score += has_digit;
    score += has_special;

    printf("\nPassword Analysis:\n");
    printf("Length: %d characters\n", length);
    printf("Uppercase: %s\n", has_upper ? "Yes" : "No");
    printf("Lowercase: %s\n", has_lower ? "Yes" : "No");
    printf("Number: %s\n", has_digit ? "Yes" : "No");
    printf("Special character: %s\n", has_special ? "Yes" : "No");

    printf("\nPassword Strength: ");

    if (score <= 2)
    {
        printf("WEAK\n");
    }
    else if (score <= 4)
    {
        printf("MODERATE\n");
    }
    else
    {
        printf("STRONG\n");
    }

    printf("\nThank you for using Sentinel Password Checker!\n");

    return 0;
}
