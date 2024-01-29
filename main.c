#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define p printf
#define g gotoxy
#define s scanf
#define tx 0.1

void gotoxy(int x, int y) {
  COORD coord;
  coord.X = x - 1; // Adjust for zero-based indexing
  coord.Y = y - 1; // Adjust for zero-based indexing
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 int main(){
    char name[50], dep[50], id[50];
    int days, gross_salary, sss = 500, tax, phil_health = 200, net_salary, rate_day = 500;
    g(2,3);p("Employee Name: \n");
    g(2,4);p("ID no: \n");
    g(2,5);p("Department: \n");
    g(2,6);p("No of days worked: \n");

    g(30,3);gets(name);
    g(30,4);gets(id);
    g(30,5);gets(dep);
    g(30,6);s("%d", &days);

    g(2,7);p("Gross Salary: \n");
    g(2,8);p("10%% Tax: \n");
    g(2,9);p("SSS: \n");
    g(2,10);p("PHIL HEALTH:\n");
    g(2,11);p("Net Salary: \n");

    gross_salary = days * rate_day;
    tax = tx * gross_salary;
    net_salary = gross_salary - tax - sss - phil_health;

    g(30,7);p("%d", gross_salary);
    g(30,8);p("%d", tax);
    g(30,9);p("%d", sss);
    g(30,10);p("%d", phil_health);
    g(30,11);p("%d", net_salary);

    getch();
 }