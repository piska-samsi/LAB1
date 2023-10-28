#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu()
{
  system("cls");
  printf("1. METHOD: Decomposition of the left side of the equation into factors \n");
  printf("2. METHOD: Full square selection method\n");
  printf("3. METHOD: Solving quadratic equations by the formula \n");
  printf("4. METHOD: Solving equations using Vieta's theorem \n");
  printf("5. METHOD: Solving equations by the transfer method\n");
  printf("6. METHOD: Properties of the coefficients of the quadratic equation \n");
  printf("7. METHOD: Graphical solution of the quadratic equation \n");
  printf("8. METHOD: Solving quadratic equations with a compass and ruler \n");
  printf("9. METHOD: Solving quadratic equations using a nomogram \n");
  printf("10. METHOD: Geometric method for solving quadratic equations\n");
  printf("0. Exit \n");
  printf("Your choice - ");
}

#include "my_func.h"

int main()
{
  int choice; //переменная которая хранит номер метода

  do
  {
    menu(); //вызов меню

    scanf("%d", &choice); // считываем переменную
    while (choice > 10 || choice < 0)
    {
      printf("Wrong option.\nYour choice - ");// проверка на соответствие метода
      scanf("%d", &choice);
    }

    switch (choice)
    {
    case 1:
      printf("You have chosen 1");
      break;
    case 2:
       met2();
      break;
    case 3:
      met3();
      break;
    case 4:
      printf("You have chosen 4");
      break;
    case 5:
      printf("You have chosen 5");
      break;
    case 6:
      printf("You have chosen 6");
      break;
    case 7:
      met789();
      break;
    case 8:
      met789();
      break;
    case 9:
      met789();
      break;
    case 10:
      printf("You have chosen 10");
      break;
    }
    if (choice != 0)
      system("pause");
  } while (choice != 0);
  return 0;
}