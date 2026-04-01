#include <stdio.h>
#include <string.h>

int main() {
    char str[40], str2[20];
    scanf("%s %s", str, str2);

    int l = strlen(str);
    int l2 = strlen(str2);

    for (int i = 0; i <= l2; i++) {
        str[l + iu] = str2[i];
    }
    str[l + l2] = '\0';

    printf("%s", str);
    return 0;
}
