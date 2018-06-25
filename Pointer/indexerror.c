#include <stdio.h>

int arr[10];
int main(void)
{
    arr[1] = 1;
    arr[2] = 2;

    printf("GeeksQuiz\n");
    printf("%d ", *(arr+2050));
    printf("\n"); 

    return 0;
}