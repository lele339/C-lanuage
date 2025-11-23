#include "functionRewriting.h"
#include <stddef.h>

int  rewrite_strle(char* str) {
	int cnt = 0;
	while (*str != "\0") {
		cnt++;
		str++;
	}
	return cnt;
}

char* rewriter_strcpy(char* to, const char* from) {
  
    char* dest = to;
    for (; *from != '\0';) {
        *to = *from;
        to++;
        from++;
    }
    *to = '\0';
    return dest;
}
void* rewriter_memcpy(void* to, const void* from, int count) {
    char* dest = to;
    char* src = from;
    if (to == from) return to;
    for (int i = 0; i < count; i++) {
        *dest = *src;
        src++;
        dest++;
    }
    return to;
    }

char* rewriter_strcat(char* str1, const char* str2) {
    char* dest = str1;
    char* src = str2;
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return dest;
}
int rewriter_strcmp(const char* str1, const char* str2) {
    while (*str1 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;

}
char* restrstr(const char* str1, const char* str2) {

}