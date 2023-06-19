#include <stdio.h>
#include <stdlib.h>

int _putchar(char c) {
  putchar(c);
  return 0;
}

int _islower(int c) {
  return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int _abs(int n) {
  return (n < 0) ? -n : n;
}

int _isupper(int c) {
  return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
  return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
  int i;
  for (i = 0; s[i] != '\0'; i++);
  return i;
}

void _puts(char *s) {
  puts(s);
}

char *_strcpy(char *dest, char *src) {
  int i;
  for (i = 0; src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
  dest[i] = '\0';
  return dest;
}

int _atoi(char *s) {
  int n = 0;
  int sign = 1;
  if (*s == '-') {
    sign = -1;
    s++;
  }
  while (*s >= '0' && *s <= '9') {
    n = n * 10 + (*s - '0');
    s++;
  }
  return n * sign;
}

char *_strcat(char *dest, char *src) {
  int i, j;
  for (i = 0; dest[i] != '\0'; i++);
  for (j = 0; src[j] != '\0'; j++) {
    dest[i + j] = src[j];
  }
  dest[i + j] = '\0';
  return dest;
}

char *_strncat(char *dest, char *src, int n) {
  int i, j;
  for (i = 0; dest[i] != '\0'; i++);
  for (j = 0; j < n && src[j] != '\0'; j++) {
    dest[i + j] = src[j];
  }
  dest[i + j] = '\0';
  return dest;
}

char *_strncpy(char *dest, char *src, int n) {
  int i;
  for (i = 0; i < n && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
  dest[i] = '\0';
  return dest;
}

int _strcmp(char *s1, char *s2) {
  int i;
  for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);
  return s1[i] - s2[i];
}

char *_memset(char *s, char b, unsigned int n) {
  int i;
  for (i = 0; i < n; i++) {
    s[i] = b;
  }
  return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
  int i;
  for (i = 0; i < n; i++) {
    dest[i] = src[i];
  }
  return dest;
}