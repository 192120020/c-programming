#include <stdio.h>

union records {
    char first_name[50];
    char last_name[50];
    int roll_number;
    float marks;
};

int main() {
    int x, i;
    // x is the number of students

    printf("Enter the number of students: ");
    scanf("%d", &x);

    // To assign the records into union set
    union records student[x];
    
    // It will store the student's information
    printf("\nEnter the students's informations:\n");
    for (i = 0; i < x; i++) {
        student[i].roll_number = (i + 1);
        printf("\nInformation for Roll Number:\t%d\n", student[i].roll_number);

        printf("Enter the first name: ");
        scanf("%s", student[i].first_name);

        printf("Enter the last name: ");
        scanf("%s", student[i].last_name);

        printf("Enter the marks: ");
        scanf("%f", &student[i].marks);
    }

    // It will display the student's information
    printf("\n\nDisplay the student's information:\n");
    for (i = 0; i < x; i++) {
        printf("\nThe Roll Number:\t%d\n", (i + 1));

        printf("The First Name: ");
        puts(student[i].first_name);

        printf("The Last Name: ");
        puts(student[i].last_name);

        printf("The Marks: %.1f", student[i].marks);
        printf("\n");
    }
    return 0;
}
