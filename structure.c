#include<stdio.h>

//global structures
struct person {
    char name[50];
    int age;
    float salary;

};


int main() {

    struct person person[4];
    for(int i=0;i<4;i++)
{
    printf("enter name age and salary of person %d: ", i+1);
    scanf("%s %d %f", person[i].name, &person[i].age, &person[i].salary);

}
    printf("\n\nDetails of persons:\n");
    for(int i=0;i<4;i++)
    {
        printf("Person %d:\n Name = %s, Age = %d, Salary = %.2f\n", i+1, person[i].name, person[i].age, person[i].salary);
    }

    return 0;
}