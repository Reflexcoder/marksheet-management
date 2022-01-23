#include<stdio.h>
struct stu
{
    int sroll;
    char sname[20];
    int marks[5];
};
int main()
{
    struct stu s;
    int total=0,i; float average,percent;
    printf("Enter Studentroll: ");
    scanf("%d",&s.sroll);
    printf("Enter Studentname: ");
    scanf("%s",s.sname);
    printf("Enter 5 subject marks: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
        total+=s.marks[i];
        average=(float)total/5;
    }
    printf("Studentroll: %d\n",s.sroll);
    printf("Studentname: %s\n",s.sname);
    printf("Studenttotal marks: %d\n",total);
    printf("Studentaverage: %f\n",average);
    return 0;
}
