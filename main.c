#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main (){

  time_t start, end;
  double dif;
  double duration = 4;	//duration of timer
  bool loop = true;
  while (loop == true)
    {
      time (&start);
       printf("hello");
      if (dif == duration)
      
	{
	  /*callback */
	  dif = 0;
	}
      //do stuff
     
      time (&end);
      dif += difftime (end, start);
    }
  return 0;
}