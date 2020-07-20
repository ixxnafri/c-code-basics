#include <stdio.h>
#include <stdlib.h>

void writefile();
void readfile();

int main()
{
    //writefile();
    readfile();
}

void writefile()
{
    int num;
    FILE * fptr;
    fptr = fopen("file1.txt", "w");

    if(NULL == fptr)
    {
        printf("Error in writefile() function");
        exit(1);
    }
    printf("Enter a number: ");
    scanf("%d", &num);

    // fprintf write it as a string vs fwrite writes as a byte
    fprintf(fptr, "%d", num);
    fclose(fptr);
}

void readfile()
{
    FILE * fptr;
    fptr = fopen("file1.txt", "r");
    
    if(NULL == fptr)
    {
        printf("Error readfile() function");
        exit(1);
    }
    char c = fgetc(fptr);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
}