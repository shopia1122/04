#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int x, sec, min, hour;
   
   printf("input the second: ");
   scanf("%d", &x);
   
   hour = x / 3600;
   min = (x % 3600) / 60;
   sec = x % 60;
   
   printf("the time is %d: %d : %d\n", hour, min, sec);
    
    
    
    
  
  system("PAUSE");	
  return 0;
}

