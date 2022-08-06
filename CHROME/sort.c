#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    char str[25][25], temp[25];
    printf("Enter No. Of Strings: ");
    scanf("%d", &n);
    printf("Enter Strings: \n");
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpty(str[j], temp);
            }
        }
    }
    printf("Sorted Strings: \n");
    for (i = 0; i < n; i++) {
        printf("%s", str[i]);
    }
    return 0;
}