#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

void menu();
void query();
void delete();
void change();
void listAll();
int weightAge(unsigned int age);
int salaryWeight(float salaray);
int serviceWeight(char service[20]);

int main()
{

  menu();
  return 0;
}

void menu()
{
  char option;

  do
  {
    system("cls");
    printf("\n\n> > > Nupaga < < < \n\n");
    printf("O que deseja fazer? \n\n");
    printf("C - Consultar \n");
    printf("A - Alterar \n");
    printf("E - Excluir \n");
    printf("T - Listar Todos \n");
    printf("S - Sair \n\n");

    scanf(" %c", &option);
    option = toupper(option);
    switch (option)
    {
    case 'E':
      delete ();
      break;
    case 'A':
      change();
      break;
    case 'C':
      query();
      break;
    case 'T':
      listAll();
      break;
    }

  } while (option != 'S');
}

void query(){};
void delete(){};
void change(){};
void listAll(){};

int securityPayment(unsigned int age, float salaray, char service[20])
{

  return weightAge(age) * salaryWeight(salaray) * serviceWeight(service);
};

int weightAge(unsigned int age)
{
  if (age < 18)
  {
    return 0;
  }
  if (age < 31)
  {
    return 4;
  }

  if (age < 51)
  {
    return 3;
  }

  if (age < 71)
  {
    return 2;
  }
  return 1;
};

int salaryWeight(float salaray)
{
  if (salaray <= 1200)
  {
    return 5;
  }

  if (salaray <= 3600)
  {
    return 6;
  }

  if (salaray <= 6000)
  {
    return 7;
  }
  return 8;
}

int serviceWeight(char service[20])
{
  if (strcmp(service, "publico") == 0) {
    return 2;
  }
  return 1;
}
