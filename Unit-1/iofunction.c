#include <stdio.h>

int main() {
    int rollNo = 25;
    char college[] = "MIT";
    char grade = 'A';
    char division[] = "SOC14";
    float percentage = 85.5;

    printf("----- Student Details -----\n");
    printf("Roll Number : %d\n", rollNo);
    printf("College     : %s\n", college);
    printf("Grade       : %c\n", grade);
    printf("Division    : %s\n", division);
    printf("Percentage  : %.2f%%\n", percentage);

    return 0;
}