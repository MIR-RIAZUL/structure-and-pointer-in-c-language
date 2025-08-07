#include<stdio.h>

//global structures
struct person {
    int age;
    float salary;

};


int main() {

    struct person person[4];
    for(int i=0;i<4;i++)
{
    printf("enter age and salary of person %d: ", i+1);
    scanf("%d %f", &person[i].age, &person[i].salary);

}
    printf("\n\nDetails of persons:\n");
    for(int i=0;i<4;i++)
    {
        printf("Person %d: Age = %d, Salary = %.2f\n", i+1, person[i].age, person[i].salary);
    }

    return 0;
}