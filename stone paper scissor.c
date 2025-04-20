#include <math.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
int game(char you, char computer)
{
 if (you == computer)
 return -1;
 if (you == 's' && computer == 'p')
 return 0;
 
 else if (you == 'p' && computer == 'x') 
 return 1;
 if (you == 's' && computer == 'x')
 return 1;
 else if (you == 'x' && computer == 's')
 return 0;
 if (you == 'p' && computer == 'x')
 return 0;
 else if (you == 'x' && computer == 'p')
 return 1;
}
int main()
{
 int n;
 char you, computer, result;
 srand(time(NULL));
 n = rand() % 100;
 if (n < 33)
 computer = 's';
 else if (n > 33 && n < 66)
 computer = 'p';
 else
 computer = 'x';
 printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and x for SCISSOR\n\t\t\t\t\t\t\t");
 scanf("%c", &you);
 result = game(you, computer);
 if (result == -1) {
 printf("\n\n\t\t\t\tGame Draw!\n");
 }
 else if (result == 1) {
 printf("\n\n\t\t\t\tWow! You have won the game!\n");
 }
 else { 
 printf("\n\n\t\t\t\tOho! You have lost the game!\n");
 }
 printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",you, computer);
 return 0;
}