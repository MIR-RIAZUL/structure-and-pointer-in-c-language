#include<stdio.h>

//global structures
struct person {
    int age;
    float salary;

};


int main() {


    struct person p1,p2;
    
    // p1.age = 30;
    // p1.salary = 50000.50;
    // p2.age = 25;
    // p2.salary = 45000.75;

    printf("Enter age and salary for person 1: ");
    scanf("%d %f", &p1.age, &p1.salary);

    printf("Enter age and salary for person 2: ");
    scanf("%d %f", &p2.age, &p2.salary);

    printf("Person 1: Age = %d, Salary = %.2f\n", p1.age, p1.salary);
    printf("Person 2: Age = %d, Salary = %.2f\n", p2.age, p2.salary);


    return 0;
}