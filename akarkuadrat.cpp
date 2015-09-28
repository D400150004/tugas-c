#include <stdio.h>
#include <conio.h>
#include <math.h>

float akar1(int a, int b, int c);
float akar2(int a, int b, int c);

main()
{
    int a,b,c,d;
   
    printf("=====================================================\n");
    printf("Program menghitung akar-akar persamaan kuadrat      \n");
    printf("yang mewakii koefisien persamaan kuadrat : AX^2+BX+C\n");
    printf("=====================================================\n\n");
    printf("Masukkan nilai A : ");
    scanf("%d", &a);
    printf("Masukkan nilai B : ");
    scanf("%d", &b);
    printf("Masukkan nilai C : ");
    scanf("%d", &c);
    
    d=sqrt(b*b-4*a*c);
    
    if (d<0)
       printf("\nKarena D<0 maka persamaan kuadrat %dX^2+%dX+%d tidak memiliki akar", a,b,c);
    else
        {
        printf("\nAkar-akar dari persamaan kuadrat %dX^2+%dX+%d yaitu :\n\n", a,b,c);
        printf("X1 = %f\n", akar1(a,b,c));
        printf("X2 = %f", akar2(a,b,c));        
        }
        
    getch();
}

float akar1(int a, int b, int c)
{
      float d, x1;
      
      d=sqrt(b*b-4*a*c);
      x1=(-b+d)/(2*a);
      return(x1);

}

float akar2(int a, int b, int c)
{
      float d, x2;
      
      d=sqrt(b*b-4*a*c);
      x2=(-b-d)/(2*a);
      return(x2);

}
