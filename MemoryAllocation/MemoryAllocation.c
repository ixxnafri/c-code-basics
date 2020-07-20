#include <stdio.h>
#include <stdlib.h>

void malloc_function();
void calloc_function();

int main()
{
    malloc_function();
    calloc_function();
}

void malloc_function()
{
    int * ptr;
    // ptr = (cast-type *) malloc(byte-size)
    int num = 5;
    ptr = (int *) malloc(num*sizeof(int));

    if (NULL == ptr)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    else
    {
        printf("Memory successfully allocated\n");
        int i;
        for(i = 0; i < num; i++)
        {
            printf("%d",ptr[i]);
        }
        printf("\n");
    }
    free(ptr);
}

void calloc_function()
{
    int * ptr;
    // ptr = (cast-type *) calloc(element-size,byte-size)
    int num = 5;
    ptr = (int *) calloc(num, sizeof(int));

    if (NULL == ptr)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    else
    {
        printf("Memory successfully allocated\n");
        int i;
        for(i = 0; i < num; i++)
        {
            printf("%d",ptr[i]);
        }
        printf("\n");
    }
    free(ptr);
}

