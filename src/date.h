#ifndef SRC_DATA_H_
#define SRC_DATA_H_

typedef struct date {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int status;
    int code;
} date;

void fill(date *s, int *a);

int date_min(const date *s1, const date *s2);

#endif  // SRC_DATA_H_