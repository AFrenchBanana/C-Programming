#include <stdio.h>

void find_replace(char *, int, char, char);

int main() {
    char string[] = "AB-34-67-BC-CD-AB";
    char find = '-';
    char replace = ':';
    find_replace(string, (sizeof(string)/sizeof(string[0])), find, replace);
    printf("New string is: %s\n", string);
    char string2[] = "/usr/data";
    char find2 = '/';
    char replace2 = '\\';
    find_replace(string2, (sizeof(string2)/sizeof(string2[0])), find2, replace2);
    printf("New string is: %s\n", string2);
    return 0;
}

void find_replace(char * string, int size, char find, char replace){
    for (int i=0; i<size; i++){
        if (string[i] == find) {
            string[i] = replace;
        }
    }
}