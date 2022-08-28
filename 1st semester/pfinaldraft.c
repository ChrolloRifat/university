#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void menu();
void mainmenu();
void exit();

int num;
float price;
float total;
char choice;
int again;

void main()
{
  mainmenu();
}

void mainmenu()
{
  char choice = ' ';
  printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
  printf("\n\t\t\t  +      ++++++++++++++++++++++++++++++++++++++++++++++++      +");
  printf("\n\t\t\t  +      +                                              +      +");
  printf("\n\t\t\t  +      +                                              +      +");
  printf("\n\t\t\t  +      +      WELCOME TO RIFAT FOOD SHOP 	+      +");
  printf("\n\t\t\t  +      +                                              +      +");
  printf("\n\t\t\t  +      +                                              +      +");
  printf("\n\t\t\t  +      ++++++++++++++++++++++++++++++++++++++++++++++++      +");
  printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("\n\n\n\n\n");

  printf("\n\t\t\t\t\t\t\t FOOD MENU\n\t\t\t\t\t ______________________________________________");
  printf("\n\t\t\t\t\t| [1] MENU                           |");
  printf("\n\t\t\t\t\t| _____________________________________________|");
  printf("\n\t\t\t\t\t| [0] EXIT                                     |\n\t\t\t\t\t________________________________________________\n\t\t\t\t\t\t\t\t");

  printf("\n\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("\n\t\t\t\t\t");
  time_t t; // not a primitive datatype
  time(&t);
  printf("\t %s", ctime(&t));
  printf("\n\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++\n");

  printf("\n\n\n\t\t\t\t\tPLEASE SELECT YOUR CHOICE : ");
  scanf("%c", &choice);

  system("cls");

  {
    if (toupper(choice) == '1')
      menu();
    else if (toupper(choice) == '0')
      exit(0);
    else if (toupper(choice) != '1', '2', '3', '0')
    {
      mainmenu();
    }
  }
}

void menu() /// Menu Screen
{

  int choice = 0;
  int quantity = 0;
  int again = 0;
  printf("\n\t\t\t       ++++++++++++++++++++++++++++++++++++++++++++++++      ");
  printf("\n\t\t\t       +                                              +      ");
  printf("\n\t\t\t       +      	        MENU 		      +            ");
  printf("\n\t\t\t       +                                              +      ");
  printf("\n\t\t\t       ++++++++++++++++++++++++++++++++++++++++++++++++      \n\n");
  printf("\t   [1] Fried Rice                        - BDT 50\n");
  printf("\t   [2] Curry                             - BDT 55\n");
  printf("\t   [3] Chicken Salad                     - BDT 65\n");
  printf("\t   [4] Burger                            - BDT 70\n");
  printf("\t   [5] Soup                              - BDT 45\n");
  printf("\t   [6] Beef Buna                         - BDT 120\n");
  printf("\t   [7] Beef Khichuri                     - BDT 130\n");
  printf("\t   [8] Pizza                             - BDT 340\n");

  printf("\t   [9] Add New One             \n");
  printf("\t   [10] Back To Main-Menu         ");

  printf("\n\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
    if (choice == 1)
    {
      printf("\nFried Rice\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
      total = 50 * quantity;
      printf("===================================          ");
      printf("\nYour total bill amount is BDT%.2f,\nPayment: CASH\n", total);
      printf("====================================          \n");
      printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
      scanf("%d", &again);
      system("cls");

      if (again == 1)
        menu();
      else if (again == 2)
        mainmenu();
      else if (again != 1, 2)
      {
        printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
        exit(0);
      }
    }

    else if (choice == 2)
    {
      printf("\nCurry\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
      total = 55 * quantity;
      printf("===================================          ");
      printf("\nYour total bill amount is BDT%.2f,\nPayment: CASH\n", total);
      printf("====================================          \n");
      printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
      scanf("%d", &again);
      system("cls");

      if (again == 1)
        menu();
      else if (again == 2)
        mainmenu();
      else if (again != 1, 2)
      {
        printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
        exit(0);
      }
    }
    else if (choice == 3)
    {
      printf("\nChicken Salad\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
      total = 65 * quantity;
      printf("===================================          ");
      printf("\nYour total bill amount is BDT%.2f,\nPayment: CASH\n", total);
      printf("====================================          \n");
      printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
      scanf("%d", &again);
      system("cls");

      if (again == 1)
      {
        menu();
      }
      else if (again == 2)
      {
        mainmenu();
      }
      else if (again != 1, 2)
      {
        printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
        exit(0);
      }
    }
    else if (choice == 4)
    {
      printf("\nBurgers\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
      total = 70 * quantity;
      printf("===================================          ");
      printf("\nYour total bill amount is BDT%.2f,\nPayment: CASH\n", total);
      printf("====================================          \n");
      printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
      scanf("%d", &again);
      system("cls");

      if (again == 1)
      {
        menu();
      }
      else if (again == 2)
      {
        mainmenu();
      }
      else if (again != 1, 2)
      {
        printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
        exit(0);
      }
    }
    else if (choice == 5)
    {
      printf("\nSoup\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
      total = 45 * quantity;
      printf("===================================          ");
      printf("\nYour total bill amount is BDT%.2f,\nPayment: CASH\n", total);
      printf("====================================          \n");
      printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
      scanf("%d", &again);
      system("cls");

      if (again == 1)
      {
        menu();
      }
      else if (again == 2)
      {
        mainmenu();
      }
      else if (again != 1, 2)
      {
        printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
        exit(0);
      }
    }
    else if (choice == 6)
    {
      printf("\nBeef Buna\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
      total = 120 * quantity;
      printf("===================================          ");
      printf("\nYour total bill amount is BDT%.2f,\nPayment: CASH\n", total);
      printf("====================================          \n");
      printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
      scanf("%d", &again);
      system("cls");

      if (again == 1)
      {
        menu();
      }
      else if (again == 2)
      {
        mainmenu();
      }
      else if (again != 1, 2)
      {
        printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
        exit(0);
      }
    }
    else if (choice == 7)
    {
      printf("\nBeef Khichuri\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
      total = 130 * quantity;
      printf("===================================          ");
      printf("\nYour total bill amount is BDT%.2f,\nPayment: CASH\n", total);
      printf("====================================          \n");
      printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
      scanf("%d", &again);
      system("cls");

      if (again == 1)
      {
        menu();
      }
      else if (again == 2)
      {
        mainmenu();
      }
      else if (again != 1, 2)
      {
        printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
        exit(0);
      }
    }
    else if (choice == 8)
    {
      printf("\nPizza\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
      total = 340 * quantity;
      printf("===================================          ");
      printf("\nYour total bill amount is BDT%.2f,\nPayment: CASH\n", total);
      printf("====================================          \n");
      printf("Would you like to order more?\nEnter [1] - Yes, Enter [2] - No : ");
      scanf("%d", &again);
      system("cls");

      if (again == 1)
      {
        menu();
      }
      else if (again == 2)
      {
        mainmenu();
      }
      else if (again != 1, 2)
      {
        printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
        exit(0);
      }
    }

    else if (choice == 9)
    {
      FILE *fp, *ft;
      char another;

      struct emp
      {
        char name[40];
        int pri;
      };

      struct emp e; // structure variable creation

      char empname[40]; // string to store name of the food

      long int recsize; // size of each record of food

         fp = fopen("FOS.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("FOS.DAT","wb+");
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }


      // size of each record i.e. size of structure variable e
      recsize = sizeof(e);

      while (1)
      {
        system("cls"); // clear the console window

        printf("1. Add Food");

        printf("2. Display Food");

        printf("3. Delete Food");

        printf("4. Back To Main-Menu");

        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        scanf("%c", choice);
        switch (choice)
        {
        case '1':
          system("cls");
          fseek(fp, 0, SEEK_END); // search the file and move cursor to end of the file
          // here 0 indicates moving 0 distance from the end of the file

          another = 'y';
          while (another == 'y')
          {
            printf("\nEnter Item's Name: ");
            scanf("%s", e.name);
            printf("\nEnter Price: ");
            scanf("%d", &e.pri);
            fwrite(&e,recsize,1,fp); // write the record in the file
            printf("\nAdd another record(y/n) ");
            fflush(stdin);
            scanf("%c", another);
          }
          break;
        case '2':
          system("cls");
          rewind(fp);                                       // this moves file cursor to start of the file
          while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
          {
            printf("\nItem is %s", e.name);
            printf("\nPrice is: %d", e.pri);
          }

          break;
        case '3':
          system("cls");
          another = 'y';
          while (another == 'y')
          {
            printf("\nEnter name of Food to delete: ");
            scanf("%s", empname);
            ft = fopen("Temp.dat","wb");  // create a inteRs.ediate file for temporary storage
            rewind(fp);                                       // move record to starting of file
           while(fread(&e,recsize,1,fp) == 1)  // read all records from file
            {
              if (strcmp(e.name, empname) != 0) // if the entered record match
              {
                fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
              }
            }
                fclose(fp);
                fclose(ft);
                remove("FOS.DAT"); // remove the original file
                rename("Temp.dat","FOS.DAT"); // rename the temp file to original file name
                fp = fopen("FOS.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                scanf("%c", another);
          }
          break;
        case '4':
          fclose(fp); // close the file
          system("cls");
          menu();
        }
      }
    }
    else if (choice == 10)
    {
      mainmenu();
    }
    else if (choice != 1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
    {
      system("cls");
      printf("\n\n\t\t   Invalid Choice Entered\n\n");
      menu();
    }
  }
}

void exit(back) /// Exit Screen
{
  printf("\n\n\t===============Rifat Food Shop==================          ");
  printf("   \n         Thanks for choosing our shop\n\n");
  printf("             We hope to see you again!  \n");
  printf("\t====================================  \n");

  exit(0);
}
