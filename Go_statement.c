#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        goto even;  
    else
        goto odd;   

even:
    printf("The number is even.\n");
    goto end;      

odd:
    printf("The number is odd.\n");

end:
    return 0;
}
