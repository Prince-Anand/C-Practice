#include <stdio.h>
#include <string.h>
int main()
{
    char user[20];
    char password[20];
login:
    scanf("%s", user);
    scanf("%s", password);
    if (strcmp(user, "admin") == 0 && strcmp(password, "password123") == 0)
    {
        printf("Login Successful");
    }
    else
    {
        printf("Invalid Enter again!!\n");
        goto login;
    }

    return 0; // used to return 0 if compilation is successfull
}