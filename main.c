#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int first, second;
    
    printf("input two integers : ");
    scanf("%d %d", &first, &second);
    
    printf("+ result is %d\n", first + second);
    printf("- result is %d\n", first - second);
    printf("* result is %d\n", first * second);
    printf("/ result is %d\n", first / second);
    printf("%% result is %d\n", first % second);
    
    printf("-------------------------------------\n");
    printf("Process exited after 2.236 seconds with return value 0\n");
  
  system("PAUSE");	
  return 0;
}
