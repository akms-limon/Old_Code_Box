#include <stdio.h>

int main()
{
    FILE *fp;
    char file_name[]="my_file.txt";

    fp =fopen(file_name,"w");

    fprintf(fp, "This a file created by my program!");
    fprintf(fp, "I am so happy.");

    fclose(fp);
     
    return 0;
}