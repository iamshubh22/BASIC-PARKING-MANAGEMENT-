#include<stdio.h>
#include<conio.h>
int menu();
void rikshaw();
void cycle();
void bus();
void motorcycle();
void car();
void scooty();
void show_status();
void delete_data();
int no_of_rikshaw=0;
int no_of_cycle=0;
int no_of_bus=0;
int no_of_motorcycle=0;
int no_of_car=0;
int no_of_scooty=0;
int total_amount=0;
int total_vehicle=0;
main()
{
  while(1)
  {

  printf("******########******\n");
  printf("WELCOME TO STERLAX DIGITAL PARKING \n");
  printf("WE PROVIDE YOU THE BEST SERVICE \n");
  printf("PLEASE PRESS THE ENTRY NUMBER ACCORDING TO THE TYPE OF YOUR VEHICLE \n");
  printf("******########******\n");
  printf("\n");
  switch(menu())
  {
  case 1:
	rikshaw();
	break;
  case 2:
	cycle();
	break;
  case 3:
	bus();
	break;
  case 4:
	motorcycle();
	break;
  case 5:
	 car();
	 break;
  case 6:
	 scooty();
	 break;
  case 7:
	 show_status();
	 break;
  case 8:
	 delete_data();
	 break;
  case 9:
	 exit(0);
	 break;
  default:
	 printf("\nPLEASE ENTER A VALID CHOICE\n");
  }
  }
  getch();
}
int menu()
{
  int choice;
  printf("PRESS 1 FOR VEHICLE TYPE RIKSHAW\n");
  printf("PRESS 2 FOR VEHICLE TYPE CYCLE\n");
  printf("PRESS 3 FOR VEHICLE TYPE BUS\n");
  printf("PRESS 4 FOR VEHICLE TYPE MOTORCYCLE\n");
  printf("PRESS 5 FOR VEHICLE TYPE CAR\n");
  printf("PRESS 6 FOR VEHICLE TYPE SCOOTY\n");
  printf("PRESS 7 FOR SHOW STATUS OF PARKING\n");
  printf("PRESS 8 FOR DELETE CURRENT STORED STATUS\n");
  printf("PRESS 9 FOR EXIT THE MENU\n");
  printf("\n");
  printf("\n");
  printf("ENTER YOUR PREFERRED CHOICE\n");
  scanf("%d",&choice);
  return(choice);
}
void delete_data()
{
printf("\n YOUR DATA IS RESETTED AGAIN TO WORK \n");
no_of_rikshaw=0;
no_of_cycle=0;
no_of_bus=0;
no_of_motorcycle=0;
no_of_car=0;
no_of_scooty=0;
total_amount=0;
total_vehicle=0;
}
void show_status()
{
printf("\n YOUR ARE VIEWING STERLAX DIGITAL PARKING CURRENT STATUS \n");
printf("TOTAL NO. OF RIKSHAW=%d\n",no_of_rikshaw);
printf("TOTAL NO. OF CYCLE=%d\n",no_of_cycle);
printf("TOTAL NO. OF BUS=%d\n",no_of_bus);
printf("TOTAL NO. OF MOTORCYCLE=%d\n",no_of_motorcycle);
printf("TOTAL NO. OF CAR=%d\n",no_of_car);
printf("TOTAL NO. OF SCOOTY=%d\n",no_of_scooty);
printf("TOTAL NO. OF VEHICLES IN THE PARKING=%d\n",total_vehicle);
printf("TOTAL NO. OF AMOUNT COLLECTED FROM DIFFERENT VEHICLES=%d\n",total_amount);
}
void rikshaw()
{
  printf("\n YOUR ENTRY IS SUCCESSFUL \n");
  no_of_rikshaw++;
  total_amount=total_amount+60;
  total_vehicle++;
}
void cycle()
{
  printf("\n YOUR ENTRY IS SUCCESSFUL \n");
  no_of_cycle++;
  total_amount=total_amount+20;
  total_vehicle++;
}
void bus()
{
  printf("\n YOUR ENTRY IS SUCCESSFUL \n");
  no_of_bus++;
  total_amount=total_amount+100;
  total_vehicle++;
}
void motorcycle()
{
   printf("\n YOUR ENTRY IS SUCCESSFUL \n");
   no_of_motorcycle++;
   total_amount=total_amount+45;
   total_vehicle++;
}
void car()
{
   printf("\n YOUR ENTRY IS SUCCESSFUL \n");
   no_of_car++;
   total_amount=total_amount+75;
   total_vehicle++;
}
void scooty()
{
  printf("\n YOUR ENTRY IS SUCCESSFUL \n");
  no_of_scooty++;
  total_amount=total_amount+35;
  total_vehicle++;
}
