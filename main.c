#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sec, hour, min;
    
    printf("input the second : ");
    scanf("%d", &sec);
    
    hour = sec / 60;
    min = sec % 60;       // �� ��ġ�� input ������ �ű�� ������ �ȵȴ�. �� �׷���.  
    
    printf("the time is %d : %d\n", hour, min);
    
    
    
    
    
  
  system("PAUSE");	
  return 0;
}
