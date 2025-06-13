#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int game(char you, char system);

int main(){

    int n;
    char you, computer, result;

    char option[] = {'s', 'p', 'z'};
    int size = sizeof(option) / sizeof(option[0]);
    
    srand(time(NULL));

    int random_index = rand() % size;

    computer = option[random_index];


    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    scanf("%c", &you);

    result = game(you, computer);

    if (result == 0) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else if (result == -1){ 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
    printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",you, computer);

    return 0;
}

int game(char you,char system){

    if (you == system)
        return 0;
    else if (you == 's' && system == 'p')
        return -1;
    else if (you == 'p' && system == 's')
        return 1;
    else if (you == 's' && system == 'z')
        return 1;
    else if (you == 'z' && system == 's')
        return -1;
    else if (you == 'p' && system == 'z')
        return -1;
    else if (you == 'z' && system == 'p')
        return 1;
}