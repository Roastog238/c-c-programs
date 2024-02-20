
#include <stdio.h>
// #include <math.h>
#include <time.h>
char* strings[]={"apple","ball","cat","dog"};
int main()
{
  int rand() ,game,guess,attempts = 0,count,srand();

  srand(time(NULL));
  game = rand() % 100 + 1;
  printf("lets paly a game\n");
  printf("guess the number\n", guess);
  printf("guess the number in 10 attempts to win jackpot\n");
  scanf("%d", &guess);
  while (guess != game)
  {
    printf("Please, try again\n");
    scanf("%d", &guess);
    attempts++;
    if (guess > game)
    {
      printf("you are over the number\n");
    }
    else if (guess < game)
    {
      printf("you are below the orginal numbeer\n");
    }
  }
  if (attempts > 5)
  {
    printf("you suck \n");
  }
  else if (attempts <= 10)
  {
    printf("you won the JACKPOT\n");
  }
  printf("You guessed the number in %d attempts", attempts);
}

