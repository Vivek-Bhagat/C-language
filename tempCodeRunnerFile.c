#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

#define Maxsize 100
void Password(char password[]);
int checkPassword(char* password[]);

int main(int argc, char*argv[])
{
    char password = Maxsize;
    int sum;
    checkPassword(password);

    sum = checkPassword(password);

    if (sum)
    {
        printf("Valid Password");
    }
    else
    {
        printf("Invalid Password !  Try again");
    }
    return 0;
}

void Password(char password[])
{
    printf("Enter the password :");
    scanf("%s", &password);
}

int checkPassword(char* password[])
{
    char upper = 0;
    char lower = 0;
    char slash = 0;
    char space = 0;
    int number = 0;

    int i;

    for(i=0; i<strlen(password); i++)
    {

        if(isupper(password[i])){
            upper =1;
        }
        else if(islower(password[i])){
            lower = 1;
        }
        // else if(password[i]=="/"){
        //     slash = 0;
        // }
        // else if(password[i]==" "){
        //     space = 0;
        // }
        // else if(password[i]=="")
    }

    return (upper && lower && slash && space);


}