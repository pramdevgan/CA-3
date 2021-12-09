#include <stdio.h>
struct student {
    char name[60];
    int roll_no;
    float marks;
} sdt;
int main() {
    printf("Enter the following information:\n");
    printf("Enter student name: ");
    fgets(sdt.name, sizeof(sdt.name), stdin);
    printf("Enter student roll number: ");
    scanf("%d", & sdt. roll_no);
    printf("Enter students marks: ");
    scanf("%f", & sdt.marks);
    printf("The information you have entered is: \n");
    printf("Student name: ");
    printf("%s", sdt.name);
    printf("Student roll number: %d\n", sdt. roll_no);
    printf("Student marks: %.1f\n", sdt.marks);
    return 0;
}