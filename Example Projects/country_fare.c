#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>

#define LEN 10
#define WIDTH 10
#define COUNT 10
#define ATTEMPTS 5

void generate_prizes(int *, int );
bool compare(int grid_num);
void guess(void);
void print_grid(int, int);
void score_tracker(void);
void grid_intialiser(int len, int width);

int prize100;
int prize50[3];
int prize10[5];
int grid[100];

int main(void) {
    srand(time(NULL));
    grid_intialiser(LEN, WIDTH);
    prize100 = rand() % (LEN * WIDTH);
    int *pointer50 = prize50; 
    generate_prizes(pointer50, 3); 
    int *pointer10 = prize10; 
    generate_prizes(pointer10, 5); 
    guess();
    return 0;
}

void generate_prizes(int *prize, int number_of_prizes){ 
    for(int i = 0; i < number_of_prizes; i++){ 
        int temp;
        do {
            temp = rand() % (LEN * WIDTH);
        } while (compare(temp) == false);
        prize[i] = temp;
    }
}

bool compare(int grid_num){
    bool new = true;
    if(grid_num == prize100)
        new = false;
    for (int i = 0; i < 3; i++){
        if(grid_num == prize50[i])
            new = false;
    }
    for (int i = 0; i < 5; i++){
        if(grid_num == prize10[i])
            new = false;
    }
    return new;
}

void guess(){
    printf("Welcome to the country fare game!\n");
    printf("You have 10 attempts to guess the winning numbers\n");
    printf("You can win £100, £50 or £10\n");
    printf("The winning numbers are between 0 and 99\n");
    printf("-1 means you have already guessed that number with no prize.\n");
    printf("-2 means you have won that prize in that position\n");
    print_grid(LEN, WIDTH);
    int score = 0;
    for (int i = 0; i < ATTEMPTS; i++){
        printf("You have %d attempts left\n", ATTEMPTS - i);
        int guess;
        printf("Guess a number between 0 and 99: ");
        scanf("%d", &guess);
        if (guess < 0 || guess > 99){
            printf("Invalid guess\n");
            i--;
        }
        else
        if (guess == prize100){
            printf("You won £100!\n");
            grid[guess] = -2;
            score += 100;

        } 
        else if (guess == prize50[0] || guess == prize50[1] || guess == prize50[2]){
            printf("You won £50!\n");
            grid[guess] = -2;
            score += 50;
        }
        else if (guess == prize10[0] || guess == prize10[1] || guess == prize10[2] || guess == prize10[3] || guess == prize10[4]){
            printf("You won £10!\n");
            grid[guess] = -2;
            score += 10;
        }
        else {
            printf("Missed!\n");
            grid[guess] = -1;
        }
        print_grid(LEN, WIDTH);
    }
    printf("Your score is: %d\n", score);
    printf("The winning numbers were: \n");
    printf("£100:\n %d ", prize100);
    printf("\n£50: \n ");
    for (int i = 0; i < 3; i++){
        printf("%d ", prize50[i]);
    }
    printf("\n£10: \n ");
    for (int i = 0; i < 5; i++){
        printf("%d ", prize10[i]);
    }
    printf("\n");
}

void print_grid(int len, int width) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < width; j++) {
            if (i * width + j < 10 && grid[i * width + j] >= 0) {
                printf("0%d ", grid[i * width + j]);
            } else {
                printf("%d ", grid[i * width + j]);
            }
        }
        printf("\n");
    }
}

void grid_intialiser(int len, int width) {
    for (int i = 0; i < len * width; i++) {
        grid[i] = i;
    }
}
