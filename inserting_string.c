#include <stdio.h>
#include <string.h>

int main() {
    int i, j, p, lena, lenb;
    char a[100], b[100];

    printf("Enter 1st string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter 2nd string: ");
    fgets(b, sizeof(b), stdin);

    lena = strlen(a);
    lenb = strlen(b);

    printf("Enter Position to insert: ");
    scanf("%d", &p);

    for (i = lena - 1; i >= p; i--) {
        a[i + lenb] = a[i];
    }

    for (i = 0; i < lenb; i++) {
        a[p + i] = b[i];
    }

    printf("Modified string: %s\n", a);

    return 0;
}
