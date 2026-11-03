#include <stdio.h>

int main() {
    char name[50];
    int marks[5], total = 0;
    float percentage;
    int i;

    printf("===== STUDENT PERFORMANCE ANALYZER =====\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("\nEnter marks in 5 subjects:\n");

    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Enter between 0 and 100.\n");
            return 0;
        }

        total += marks[i];
    }

    percentage = total / 5.0;

    printf("\n========== RESULT ==========\n");
    printf("Student Name: %s\n", name);
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if(percentage >= 90)
        printf("Grade: A+ (Excellent!)\n");
    else if(percentage >= 80)
        printf("Grade: A (Very Good!)\n");
    else if(percentage >= 70)
        printf("Grade: B (Good!)\n");
    else if(percentage >= 60)
        printf("Grade: C (Average)\n");
    else if(percentage >= 40)
        printf("Grade: D (Needs Improvement)\n");
    else
        printf("Grade: F (Fail)\n");

    if(percentage >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    printf("============================\n");

    return 0;
}