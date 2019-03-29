    
#include <stdio.h> 

int main(void)
{ 
for(int s=0; 
printf("輸入想轉換的秒數:") && 
scanf("%d", &s) && 
s > 0; 
printf("轉換時間為:%d 小時 %d 分鐘 %d 秒\n", 
s/(60*60), (s%(60*60))/60, s%60)); 
return 0; 
}
