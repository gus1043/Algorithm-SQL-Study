#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y; 
    if (scanf("%d %d", &x, &y) != 2) return 1;

    const char* day_names[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int days[] = {31, 28,31,30,31,30,31,31,30,31,30,31};

    int i;
    int total_days = y - 1;
    for (i = 0; i < x - 1; i++) {
        total_days += days[i];
    }

    printf("%s\n", day_names[total_days % 7]);

    return 0;
}
