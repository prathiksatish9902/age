#include <stdio.h>
#include <stdbool.h>
int main()
{
    int ar,as,aa;
    printf("enter the age of 3 people :");
    scanf("%d %d %d \n", &ar , &as , &aa);
    if ((ar<as)&&(ar<aa)){
            printf("ram is youngest");
        }
    else if ((as<ar)&&(as<aa)){
            printf("sam is youngest");
        }
    else{
        printf("ajay is youngest");
    }
    return 0;
}
