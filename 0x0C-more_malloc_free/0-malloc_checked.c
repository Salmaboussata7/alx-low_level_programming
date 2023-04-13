#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int s1_len, s2_len, i;
    char *result;

    if (s1 == NULL) {
        s1 = "";
    }

    if (s2 == NULL) {
        s2 = "";
    }

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    if (n >= s2_len) {
        n = s2_len;
    }

    result = malloc((s1_len + n + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    for (i = 0; i < s1_len; i++) {
        result[i] = s1[i];
    }

    for (i = 0; i < n; i++) {
        result[s1_len + i] = s2[i];
    }

    result[s1_len + n] = '\0';

    return result;
}
