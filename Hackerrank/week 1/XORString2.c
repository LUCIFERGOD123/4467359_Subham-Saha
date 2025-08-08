#include <stdio.h>
#include <string.h>

void strings_xor(char s[], char t[], char res[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        res[i] = (s[i] == t[i]) ? '0' : '1';
    }
    res[len] = '\0';
}

int main() {
    char s[1001], t[1001], res[1001];

    scanf("%s", s);
    scanf("%s", t);

    strings_xor(s, t, res);
    printf("%s", res);

    return 0;
}
