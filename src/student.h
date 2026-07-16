#ifndef STUDENT_H
#define STUDENT_H

struct Student
{
    int id;
    char name[50];
    int age;
    char course[50];
};

void addStudent();
void viewStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

#endif