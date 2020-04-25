#include <stdio.h>
#include <time.h>
#include <stdbool.h>


int main (){

  time_t start, end;
  int dif;

  time (&start);
  
  int c, d;
      for (c = 1; c <= 32767; c++)
       for (d = 1; d <= 2; d++)
       {printf("hello\n");}
  
  time (&end);
  
  dif += difftime (end, start); 
  printf("%d\t", dif);

  if(dif >= 5){
    printf("I will fully open the sunroof");
  }

  if(dif <= 5){
    printf("I will mid_open the sunroof");
  }
  return 0;
}