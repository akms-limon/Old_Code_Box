 #include<stdio.h>
 int main()
 {
    char country[]={'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    char countr[11]={'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', '\0'};
    char count[]="Banglade";
    char *coun="Banglad";
    printf("%s\n", country);
    printf("%s\n", countr);
    printf("%s\n", count);
    printf("%s\n", coun);
    return 0;
 }