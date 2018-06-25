#include <stdio.h>
#include <stdlib.h>

int global; /* Uninitialized variable stored in bss*/
int main(void)
{
	int arr[10]; 
    for(int i=0; i<10; i++)
    {
    	arr[i] = i;
    }

    for(int i=0; i<10; i++)
    {
    	printf("%d\n", arr[i]);
    }

    printf("#######%d#############\n", *(arr+1000));

    return 0;
}
