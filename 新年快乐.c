#include <stdio.h>
#include <windows.h>
 
int main()
{
	double x,y,a;
   system(""); 
   printf("\033[1;31m"); 
   for(y=1.5; y>-1.5; y-=0.1){
     for(x=-1.5; x<1.5; x+=0.05)  {
        a = x*x+y*y-1;
        putchar(a*a*a-x*x*y*y*y <= 0.0f? '+' : ' ');
     }
     putchar('\n');
   }   
   printf("\033[0;41m"); 
   printf("\0337\033[19A\033[23C"); 
   printf(" 李婼婷 要天天开心！ ");
   printf("\0338");   
   printf("\033[0m"); 
   return 0;
}