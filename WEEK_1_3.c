
#include <stdio.h>
#include <string.h>

void reverse(char *string, int pos, int n) {
    if (n <= 1) {
        return;
    }

    char temp = string[pos];
    string[pos] = string[pos + n - 1];
    string[pos + n - 1] = temp;

    reverse(string, pos + 1, n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    char s[n + 1];

    scanf("%s", s);

    reverse(s, 0, n);
    printf("%s", s);

    return 0;
}
