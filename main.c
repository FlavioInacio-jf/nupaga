#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void menu();
void query();
void delete();
void change();
void listAll();

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