#include<stdio.h>
#include<string.h>


int isPalindrome(char str[])
{
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++,j--)
    {
        if(str[i]!=str[j])
            return 0;
    }
    return -1;
}
int main()
{
    
    char str[100];

    printf("Enter the word :");
    scanf("%s", &str);

    //int result = isPalindrome(str);
    if(isPalindrome(str)){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}