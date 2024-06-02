#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("Positive\n");

    }
    else printf("Negative\n");
    getch();
}
