#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int integer;
    double db;
    char string[100];

    scanf("%d\n", &integer);
    scanf("%lf\n", &db);
    scanf("%[^\n]", string);

    printf("%d\n", i + integer);
    printf("%.1f\n", d + db);
    printf("%s%s", s, string);

    return 0;
}