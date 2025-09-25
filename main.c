#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int x, sec, min;
   
   printf("input the second: ");
   scanf("%d", &x);
   
   min = x /60;
   sec = x % 60;
   
   printf("the time is %d : %d\n", min, sec);
    
    
    
    
  
  system("PAUSE");	
  return 0;
}
