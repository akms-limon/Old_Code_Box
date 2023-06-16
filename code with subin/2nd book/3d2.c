#include <stdio.h>

int main()
{
    FILE *fp;
    char file_name[]="my_file.txt";

    fp = fopen(file_name, "w");

    fprintf(fp, "This is a file created by my program!");
    fprintf(fp, "I am happy.\n");

    fclose(fp);

    fprintf(fp, "Second line.\n");
    return 0;
}