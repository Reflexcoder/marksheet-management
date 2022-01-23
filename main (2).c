#include<stdio.h>
#include<string.h>
int main()
{
    char name[30], fname[30];
    int rollno,standard,math,hindi,english,physics,chemistry,obtained,percentage;
    printf("Enter Your Name: \n");
    scanf("%s",name);
    printf("Enter Your Father Name: \n");
    scanf("%s",fname);
    printf("Enter Your RollNo: \n");
    scanf("%d",&rollno);
    printf("Enter Your Class: \n");
    scanf("%d",&standard);
    printf("Enter Your Maths Marks: \n");
    scanf("%d",&math);
    printf("Enter Your Hindi Marks: \n");
    scanf("%d",&hindi);
    printf("Enter Your Physics Marks: \n");
    scanf("%d",&physics);
    printf("Enter Your Chemistry Marks: \n");
    scanf("%d",&chemistry);
    printf("Enter Your English Marks: \n");
    scanf("%d",&english);
    obtained=math + hindi + english + physics + chemistry;
    percentage=obtained*100/500;
    printf("---------MARKSHEET---------\n");
    printf("Your Name is %s \n",name);
    printf("Your Father name is %s \n",fname);
    printf("Your RollNo is %d \n",rollno);
    printf("Your Class IS %d \n",standard);
    printf("Your obtained Marks are %d \n",obtained);
    printf("Your percentage is %d \n",percentage);
    if(percentage>=80)
    printf("Grade: A-1 \n");
    else if(percentage>=70)
    printf("Grade: A \n");
    else if(percentage>=60)
    printf("Grade: B \n");
    else if(percentage>=50)
    printf("Grade: C \n");
    else if(percentage>=40)
    printf("Grade: D \n");
    else if(percentage>=33)
    printf("Grade: E \n");
    else
    printf("Fail \n");
    if(percentage>=80)
    printf("Excellent\n");
    else if(percentage>=70)
    printf("Very Good \n");
    else if(percentage>=60)
    printf("Good \n");
    else if(percentage>=50)
    printf("Fair \n");
    else if(percentage>=40)
    printf("Poor \n");
    else if(percentage>=33)
    printf("Needs Improvement \n");
    else
    printf("Need your parents tommorow \n");
    int compartment=0;
    if(math<33)
    compartment++;
    if(hindi<33)
    compartment++;
    if(english<33)
    compartment++;
    if(chemistry<33)
    compartment++;
    if(physics<33)
    compartment++;
    
    printf("You have %d compartment",compartment);
    return 0;
}
