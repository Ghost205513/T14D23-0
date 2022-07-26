#include "date.h"

void fill(date *s, int *a) {
    s -> year = a[0];
    s -> month = a[1];
    s -> day = a[2];
    s -> hour = a[3];
    s -> minute = a[4];
    s -> second = a[5];
    s -> status = a[6];
    s -> code = a[7];
}

int date_min(const date *s1, const date *s2) {
    int result = 0;
    if (s1 -> year < s2 -> year && !result) result = 1;
    if (s1 -> month < s2 -> month && !result) result = 1;
    if (s1 -> day < s2 -> day&& !result) result = 1;
    if (s1 -> hour < s2 -> hour && !result) result = 1;
    if (s1 -> minute < s2 -> minute && !result) result = 1;
    if (s1 -> second < s2 -> second && !result) result = 1;
    if (s1 -> status < s2 -> status && !result) result = 1;
    if (s1 -> code < s2 -> code && !result) result = 1;
    return result;
}