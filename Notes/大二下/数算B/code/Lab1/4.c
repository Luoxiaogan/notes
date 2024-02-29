/* #include <stdio.h>

typedef struct{
    char name[20];
    int mean_grad;
    int out_grad;
    char gb;
    char west;
    int paper_num;
}Student;

int main()
{
    int N;
    scanf("%d",&N);
    Student students[N];
    char line[100];
    for (int i=0;i<N;i++)
    {
        fgets(line,sizeof(line),stdin);
        sscanf(line,"%[^ ] %d %d %c %c %d",students[i].name,&students[i].mean_grad,&students[i].out_grad,students[i].gb,students[i].west,&students[i].paper_num);
        printf("%s",students[i].name);
    }



} */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[21];
    int mean_grade;
    int class_grade;
    char is_leader;
    char is_west;
    int papers;
    int scholarship;
};

int calculate_scholarship(struct Student student) {
    int scholarship = 0;
    if (student.mean_grade > 80 && student.papers >= 1) scholarship += 8000;
    if (student.mean_grade > 85 && student.class_grade > 80) scholarship += 4000;
    if (student.mean_grade > 90) scholarship += 2000;
    if (student.mean_grade > 85 && student.is_west == 'Y') scholarship += 1000;
    if (student.class_grade > 80 && student.is_leader == 'Y') scholarship += 850;
    return scholarship;
}

int main() {
    int n, total_scholarships = 0, max_scholarship = 0, max_index = 0;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %c %c %d", students[i].name, &students[i].mean_grade, &students[i].class_grade,
              &students[i].is_leader, &students[i].is_west, &students[i].papers);
        students[i].scholarship = calculate_scholarship(students[i]);
        total_scholarships += students[i].scholarship;
        if (students[i].scholarship > max_scholarship) {
            max_scholarship = students[i].scholarship;
            max_index = i;
        }
    }

    printf("%s\n%d\n%d\n", students[max_index].name, students[max_index].scholarship, total_scholarships);

    return 0;
}
