#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 8

/**
 * generate_password - generates a random password
 * Return: a pointer to the generated password
 */
char *generate_password(void)
{
char *password = malloc(PASSWORD_LENGTH + 1);
char chars_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char chars_lower[] = "abcdefghijklmnopqrstuvwxyz";
char chars_digits[] = "0123456789";
char *chars = strcat(strcat(chars_upper, chars_lower), chars_digits);

srand(time(NULL));

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = chars[rand() % (sizeof(chars) - 1)];
}

password[PASSWORD_LENGTH] = '\0';

return (password);
}

/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
char *password = generate_password();
printf("Generated password: %s\n", password);
free(password);

return (0);
}
