#include <stdio.h>
#include <ctype.h>

void expand(char in[], int size_out, char out[]);

void expand(char in[], int size_out, char out[])
{
    int i, j, k;

    for (i = 0, j = 0; j < size_out && in[i + 2] != '\0'; i++) {
        if (isalpha(in[i]) || isdigit(in[i])) {
            if (in[i + 1] == '-') {
                if (isalpha(in[i + 2]) || isdigit(in[i + 2])) {
                    if(in[i + 2] > in[i]) {
                        for (k = 0; k <= (in[i + 2] - in[i]) && j < size_out - 1; k++) {
                            out[j] = in[i] + k;
                            j++;
                        }
                        i += 2;
                    }
                }
            }
            else {
                if (j < size_out - 1) {
                    out[j] = in[i];
                    j++;
                }
            }
        }
        else {
            if (j < size_out - 1) {
                out[j] = in[i];
                j++;
            }
        }
    }
    out[j] = '\0';
}

int main()
{
    char out[10];
    char in[1000] = "A-Z";
    int size_out;

    size_out = 10;
    expand(in, size_out, out);
    printf("To expand: %s\n", in);
    printf("%s\n", out);

    return 0;
}
