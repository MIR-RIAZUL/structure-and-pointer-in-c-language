#include<stdio.h>

//global structures
struct person {
    char name[50];
    int age;
    float salary;

};

void display(struct person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Salary: %.2f\n", p.salary);
}


int main() {

//     struct person person[4];
//     for(int i=0;i<4;i++)
// {
//     printf("enter name age and salary of person %d: ", i+1);
//     scanf("%s %d %f", person[i].name, &person[i].age, &person[i].salary);

// }
//     printf("\n\nDetails of persons:\n");
//     for(int i=0;i<4;i++)
//     {
//         printf("Person %d:\n Name = %s, Age = %d, Salary = %.2f\n", i+1, person[i].name, person[i].age, person[i].salary);
//     }

struct person p1;

p1.age = 25;
p1.salary = 50000.50;
strcpy(p1.name, "Riazul Mir");  

display(p1);



    return 0;
}