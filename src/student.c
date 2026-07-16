#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void addStudent()
{
    struct Student s;

    FILE *fp = fopen("data/students.txt", "a");

    if (fp == NULL)
    {
        printf("\nError opening file!\n");
        return;
    }

    printf("\n========== Add Student ==========\n");

    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Age: ");
    scanf("%d", &s.age);

    printf("Enter Course: ");
    scanf(" %[^\n]", s.course);

    fprintf(fp, "%d,%s,%d,%s\n",
            s.id,
            s.name,
            s.age,
            s.course);

    fclose(fp);

    printf("\nStudent added successfully!\n");
}

void viewStudents()
{
    printf("\nView Students feature coming in Part 4.\n");
}

void searchStudent()
{
    printf("\nSearch Student feature coming in Part 5.\n");
}

void updateStudent()
{
    printf("\nUpdate Student feature coming in Part 6.\n");
}

void deleteStudent()
{
    printf("\nDelete Student feature coming in Part 7.\n");
}