#pragma once
#ifndef FUNCTIONREWRING_H_
#define FUNCTIONREWRING_H_
int  rewrite_strle(char* str);
char* rewriter_strcpy(char* to, const char* from);
void* rewriter_memcpy(void* to, const void* from, int count);
char* rewriter_strcat(char* str1, const char* str2);
int rewriter_strcmp(const char* str1, const char* str2);
char* restrstr(const char* str1, const char* str2);
#endif // !FUNCTIONREWRING_H_

