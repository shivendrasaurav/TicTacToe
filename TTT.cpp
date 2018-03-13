#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
int ps1=0,ps2=0;
int	mmenu();
int htp()
{
	system("cls");
	printf("____________________________________________________________________________________________");
	printf("\n\t\t\t\t\tTIC TAC TOE");
	printf("\n____________________________________________________________________________________________");
	printf("\n\nHELP MENU\n");
	printf("HELP SECTION IS CURRENTLY BEING BUILT");
	getch();
	mmenu();
}
int score()
{
	system("cls");
	printf("____________________________________________________________________________________________");
	printf("\n\t\t\t\t\tTIC TAC TOE");
	printf("\n____________________________________________________________________________________________");
	printf("\n\nSCORE\n");
	printf("\n\nCrosses Has Won : %d Times",::ps1);
	printf("\nCircles Has Won : %d Times",::ps2);
	printf("\n\n\nPress Enter To Continue ");
	getch();
}
int game();
int menu()
{
	start:
	system("cls");
	printf("____________________________________________________________________________________________");
	printf("\n\t\t\t\t\tTIC TAC TOE");
	printf("\n____________________________________________________________________________________________");
	printf("\n\nPOST GAME MENU\n");
	int c;
	printf("\n\n\n1. Have A Rematch\n2. Check Score\n3. Return To Main Menu");
	printf("\n\n\nEnter Your Choice Here : ");
	scanf("%d",&c);
	if(c==1)
	{
		game();
	}
	if(c==2)
	{
		score();
	}
	if(c==3)
	{
		mmenu();
	}
	else
	{
		goto start;
	}
}
int game()
{
	system("cls");
	printf("____________________________________________________________________________________________");
	printf("\n\t\t\t\t\tTIC TAC TOE");
	printf("\n____________________________________________________________________________________________");
	printf("\n\nTHE GAME BOARD\n\n");
	system("color F0");
	char p1[20],p2[20];
	printf("\nEnter Name Of Player Who Will Play With Crosses : ");
	scanf("%s",&p1);
	printf("\nEnter Name Of Player Who Will Play With Circles : ");
	scanf("%s",&p2);
	int move,i,j,c=0;
	char board[8];
	system("cls");
	printf("____________________________________________________________________________________________");
	printf("\n\t\t\t\t\tTIC TAC TOE");
	printf("\n____________________________________________________________________________________________");
	printf("\n\nTHE GAME BOARD\n\n");
	for(i=0;i<3;i++)
	{
		board[i]=' ';
		printf("\t%c\t|",board[i]);
	}
	printf("\n--------------------------------------------------------\n");
	for(i=3;i<6;i++)
	{
		board[i]=' ';
		printf("\t%c\t|",board[i]);
	}
	printf("\n--------------------------------------------------------\n");
	for(i=6;i<9;i++)
	{
		board[i]=' ';
		printf("\t%c\t|",board[i]);
	}
	
	while(c<9)
	{
	if(c%2==0)
	{
	printf("\n\nEnter no where you want to place cross : ");
	scanf("%d",&move);
	switch(move)
	{
		case 1 :board[0]='X';break;
		case 2 :board[1]='X';break;
		case 3 :board[2]='X';break;
		case 4 :board[3]='X';break;
		case 5 :board[4]='X';break;
		case 6 :board[5]='X';break;
		case 7 :board[6]='X';break;
		case 8 :board[7]='X';break;
		case 9 :board[8]='X';break;
	}
	system("cls");
	printf("____________________________________________________________________________________________");
	printf("\n\t\t\t\t\tTIC TAC TOE");
	printf("\n____________________________________________________________________________________________");
	printf("\n\nTHE GAME BOARD\n\n");
	for(i=0;i<3;i++)
	{
		printf("\t%c\t|",board[i]);
	}
	printf("\n--------------------------------------------------------\n");
	for(i=3;i<6;i++)
	{
		printf("\t%c\t|",board[i]);
	}
	printf("\n--------------------------------------------------------\n");
	for(i=6;i<9;i++)
	{
		printf("\t%c\t|",board[i]);
	}
	}
	else
	{
	printf("\n\nEnter no where you want to place zero : ");
	scanf("%d",&move);
	switch(move)
	{
		case 1 :board[0]='O';break;
		case 2 :board[1]='O';break;
		case 3 :board[2]='O';break;
		case 4 :board[3]='O';break;
		case 5 :board[4]='O';break;
		case 6 :board[5]='O';break;
		case 7 :board[6]='O';break;
		case 8 :board[7]='O';break;
		case 9 :board[8]='O';break;
	}
	system("cls");
	printf("________________________________________________________________");
	printf("\n\t\tWelcome To TIC TAC TOE");
	printf("\n________________________________________________________________");
	printf("\n\n\t\tTHE GAME BOARD\n\n");	
	for(i=0;i<3;i++)
	{
		printf("\t%c\t|",board[i]);
	}
	printf("\n--------------------------------------------------------\n");
	for(i=3;i<6;i++)
	{
		printf("\t%c\t|",board[i]);
	}
	printf("\n--------------------------------------------------------\n");
	for(i=6;i<9;i++)
	{
		printf("\t%c\t|",board[i]);
	}

	}
if(board[0]==board[4]&&board[0]==board[8]&&c>3)
{
	if(board[0]=='X')
	{printf("\n\n%s Won ",p1);::ps1++;}	
	else
	{printf("\n\n%s Won ",p2);::ps2++;}
	printf("\n\n\nPress Enter To Continue  ");
	getch();	
	menu();
}
else if(board[0]==board[1]&&board[0]==board[2] &&c>3)
{
	if(board[0]=='X')
	{printf("\n\n%s Won ",p1);::ps1++;}	
	else
	{printf("\n\n%s Won ",p2);::ps2++;}	
	printf("\n\n\nPress Enter To Continue  ");
	getch();	
	menu();
}
else if(board[3]==board[4]&&board[3]==board[5]&&c>3)
{
	if(board[3]=='X')
	{printf("\n\n%s Won ",p1);::ps1++;}	
	else
	{printf("\n\n%s Won ",p2);::ps2++;}	
	printf("\n\n\nPress Enter To Continue  ");
	getch();	
	menu();
}
else if(board[6]==board[7]&&board[6]==board[8]&&c>3)
{
	if(board[6]=='X')
	{printf("\n\n%s Won ",p1);::ps1++;}	
	else
	{printf("\n\n%s Won ",p2);::ps2++;}
	printf("\n\n\nPress Enter To Continue  ");
	getch();	
	menu();
}
else if(board[0]==board[3]&&board[0]==board[6]&&c>3)
{
	if(board[0]=='X')
	{printf("\n\n%s Won ",p1);::ps1++;}	
	else
	{printf("\n\n%s Won ",p2);::ps2++;}	
	printf("\n\n\nPress Enter To Continue  ");
	getch();	
	menu();
}
else if(board[1]==board[4]&&board[1]==board[7]&&c>3)
{
	if(board[1]=='X')
	{printf("\n\n%s Won ",p1);::ps1++;}	
	else
	{printf("\n\n%s Won ",p2);::ps2++;}	
	printf("\n\n\nPress Enter To Continue  ");
	getch();	
	menu();
}
else if(board[2]==board[5]&&board[2]==board[8]&&c>3)
{
	if(board[2]=='X')
	{printf("\n\n%s Won ",p1);::ps1++;}	
	else
	{printf("\n\n%s Won ",p2);::ps2++;}	
	printf("\n\n\nPress Enter To Continue  ");
	getch();	
	menu();
}
else if(board[2]==board[4]&&board[2]==board[6]&&c>3)
{
	if(board[2]=='X')
	{printf("\n\n%s Won ",p1);::ps1++;}	
	else
	{printf("\n\n%s Won ",p2);::ps2++;}	
	printf("\n\n\nPress Enter To Continue  ");
	getch();	
	menu();
}
	c++;
	}
printf("\n\nIt's A Draw");
	getch();
	int main();

}
int mmenu()
{
	start:
	system("cls");
	system("color F0");
	int c;
	printf("____________________________________________________________________________________________");
	printf("\n\t\t\t\t\tTIC TAC TOE");
	printf("\n____________________________________________________________________________________________");
	printf("\n\nMAIN MENU\n");
	printf("\n\n1. Play\n2. Check Score\n3. How To Play\n4. Exit\n\nEnter Your Choice : ");
	scanf("%d",&c);
	if(c==1)
	{game(); goto start;}
	else if(c==2)
	{score(); goto start;}
	else if(c==3)
	{htp(); goto start;}
	else if(c==4)
	{exit(1);}
	else
	goto start;
}
int main()
{
	system("color F0");
	mmenu();
	return 0;
}
