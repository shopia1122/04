#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sec, hour, min;
    
    printf("input the second : ");
    scanf("%d", &sec);
    
    hour = sec / 60;
    min = sec % 60;       // 얘 위치를 input 앞으로 옮기면 실행이 안된다. 왜 그럴까.  
    
    printf("the time is %d : %d\n", hour, min);
    
    
    
    
    
  
  system("PAUSE");	
  return 0;
}
