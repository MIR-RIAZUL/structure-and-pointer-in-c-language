#include<stdio.h>

//global structures
struct person {
    int age;
    float salary;

};


int main() {


    struct person p1={23,4000};
    struct person p2={
        25, 45000.75
    };
//element wise assignment
    struct person p3;
    p3.age = 30;
    p3.salary = 50000.50;

    //structure wise assignemt

    struct person p4;
    p4 = p3;
   
    



   
    
    
    
    
    // p1.age = 30;
    // p1.salary = 50000.50;
    // p2.age = 25;
    // p2.salary = 45000.75;

    // printf("Enter age and salary for person 1: ");
    // scanf("%d %f", &p1.age, &p1.salary);

    // printf("Enter age and salary for person 2: ");
    // scanf("%d %f", &p2.age, &p2.salary);



    printf("Person 1: Age = %d, Salary = %.2f\n", p1.age, p1.salary);
    printf("Person 2: Age = %d, Salary = %.2f\n", p2.age, p2.salary);
    printf("Person 3: Age = %d, Salary = %.2f\n", p3.age, p3.salary);
    printf("Person 4: Age = %d, Salary = %.2f\n", p4.age, p4.salary);


    return 0;
}