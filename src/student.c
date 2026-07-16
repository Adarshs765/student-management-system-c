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
    struct Student s;

    FILE *fp = fopen("data/students.txt", "r");

    if (fp == NULL)
    {
        printf("\nNo student records found!\n");
        return;
    }

    printf("\n===============================================\n");
    printf("             Student Records\n");
    printf("===============================================\n");

    printf("%-10s %-20s %-10s %-20s\n",
           "ID", "Name", "Age", "Course");

    printf("---------------------------------------------------------------\n");

    while (fscanf(fp, "%d,%49[^,],%d,%49[^\n]\n",
                  &s.id,
                  s.name,
                  &s.age,
                  s.course) == 4)
    {
        printf("%-10d %-20s %-10d %-20s\n",
               s.id,
               s.name,
               s.age,
               s.course);
    }

    fclose(fp);
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