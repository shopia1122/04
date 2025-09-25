#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int year, leap;
    
    
    
    printf("input year: ");
    scanf("%d", &year);
    
    leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    
    printf("Is the year %d the leap year? : %d\n", year, leap);
     
    
    
    
    
    
  
  system("PAUSE");	
  return 0;
}
