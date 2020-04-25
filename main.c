#include <stdio.h>
#include <time.h>
#include <stdbool.h>



int main (){

/*TODO: 
1) initialize the input output pins
2) set the signals of port registers
3) check which button is pushed close or open
4) set timer to check how long the button has been pushed 500ms and 1000ms
5) if the close button pushed cancel the open
6) if the reset is pushed cancel the signal (girpage)




fsdaf
*/
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