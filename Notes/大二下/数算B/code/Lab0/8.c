#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_STU_NUM 100
#define MAX_COURSE_NUM 100

typedef struct{
    char name[MAX_LEN];//学生的名字
    int courses;//选的课程的数目
}Student;

int add_find(Student students[], int *student_count, char *name)
{//student_count表示已经记录了多少学生
    for(int i=0;i<*student_count;i++)
    {//从0找到最大记录数
        if (strcmp(students[i].name,name)==0)
        {
            return i;
        }
    }
    //还没有找到，说明记录的是新的学生
    strcpy(students[*student_count].name,name);//记录名字
    students[*student_count].courses=0;//暂时选课是0
    return (*student_count)++;//索引数增加
}

int main()
{
    char input[100];//用来装输入
    Student students[1000];
    int student_count=0;

    while(fgets(input,sizeof(input),stdin))//sizeof(input)保证不会输入更多
    {
        char course[MAX_LEN],name[MAX_LEN],how[MAX_LEN];
        //课程名；名字；操作
        int n=sscanf(input,"%[^:]:%[^:]:%s",course,name,how);//^:匹配所有非冒号的字符，并且返回到底输入了几个(n)
        int student_index=add_find(students,&student_count,name);//学生的索引，&student_count传过去的是地址而不是副本,name传递的也是指针(是name数组的指针，从而可以访问整个字符数组)

        if (n==2||(n==3 && strcmp(how,"W")!=0))
        {
            //选课
            students[student_index].courses++;
        }
        else if(n==3 && strcmp(how,"W")==0)
        {
            //退课
            if(students[student_index].courses>0)
            {
                students[student_index].courses--;
            }
        }
    }

    int max_courses=0;
    char target_student[MAX_LEN];
    for (int i=0;i<student_count;i++)
    {
        if (students[i].courses>max_courses)
        {
            max_courses=students[i].courses;
            strcpy(target_student,students[i].name);
        }
    }

    printf("%s\n",target_student);

    return 0;
}