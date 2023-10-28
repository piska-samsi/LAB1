#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float met1()
{
   int a, b, c; // пемеренные кэфов уравнения
   printf("Enter value a: ");
   scanf("%d", &a);
   printf("Enter value b: ");
   scanf("%d", &b);
   printf("Enter value c: ");
   scanf("%d", &c);
   printf("====================================\n");
   printf("%dx^2%s%dx%s%d=0\n",a,b>0?"+":"",b,c>0?"+":"",c); // Выводим исходное уравнение
   float x1,x2;
   if((a+b+c)==0)//Теорема Безу
   {
      x1=1;
      x2=c/a;  
   }
   else
   {
      if((a+c)==b)//Теорема Безу
      {
         x1=-1;
         x2=(c/a)*(-1);  
      } else 
         {
            
         }
   }
}

float met2()
{
   int a, b, c; // пемеренные кэфов уравнения
   printf("Enter value a: ");
   scanf("%d", &a);
   printf("Enter value b: ");
   scanf("%d", &b);
   printf("Enter value c: ");
   scanf("%d", &c);
   printf("====================================\n");
   printf("%dx^2%s%dx%s%d=0\n",a,b>0?"+":"",b,c>0?"+":"",c); // Выводим исходное уравнение
float a2=a*2;
   float f = b/a2;
   printf("%.3f\n", f);
   float t=(b*b-4*a*c)/(4*a);
   float st=sqrt(t/a);
   printf("%d*(x+%.3f)^2-%.3f=0\n", a, f, t);
   printf("%d*(x+%.3f)^2=%.3f\n", a, f, t);
   printf("(x+%.3f)^2=%.3f\n", f, t/a);
   printf("x+%.3f=+-%.3f\n", f, st);
   printf("x1=%.3f\nx2=%.3f\n", st-f, (-1*st)-f);

}

void met3()
{
   int a, b, c; // пемеренные кэфов уравнения
   printf("Enter value a: ");
   scanf("%d", &a);
   printf("Enter value b: ");
   scanf("%d", &b);
   printf("Enter value c: ");
   scanf("%d", &c);
   printf("====================================\n");
   printf("%dx^2%s%dx%s%d=0\n",a,b>0?"+":"",b,c>0?"+":"",c); // Выводим исходное уравнение
   int D = b * b - 4 * a * c;
   printf("D=%d^2-4*%d*%d=%d\n", b, a, c, D); // Выводим дискриминант
   if (D < 0)
   {
      printf("D<0, the equation has no roots\n");
   }
   else
   {
      if (D == 0)
      {
         float x = -1 * ((b) / (2 * a));
         printf("x = -(%d)/(2*%d) = %.3f\n", b, a, x);
      }
      else
      {
         float x1 = ((-1) * b + sqrt(D)) / (2 * a);
         float x2 = ((-1) * b - sqrt(D)) / (2 * a);
         printf("x1 = (-%d+(%d)^(1/2))/(2*%d) = %.3f\nx2 = (-%d-(%d)^(1/2))/(2*%d) = %.3f \n", b, D, a, x1, b, D, a, x2);
      }
   }
   printf("====================================\n");
}

float met4()
{
   int a, b, c;
   printf("Enter value a: ");
   scanf("%d", &a);
   printf("Enter value b: ");
   scanf("%d", &b);
   printf("Enter value c: ");
   scanf("%d", &c);
   printf("====================================\n");
   printf("%dx^2+%dx+%d=0\n", a, b, c);
}

float met5()
{
}

float met6()
{
}

void met789()
{
   printf("In the development stage\n");
}

float met10()
{
}
