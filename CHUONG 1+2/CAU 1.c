//CAU 1: GIAI VA BIEN LUAN HE PT BAC NHAT HAI AN -  
#include <stdio.h>
int main()
{
  float a1,a2,b1,b2,c1,c2;
  float d,dx,dy;

  printf("Nhap cac he so cua he phuong trinh: \n");
  printf("    a1.x  + b1.y = c1  \n ");
  printf("   a2.x  + b2.y = c2  \n ");
  printf("*************************************\n");
  
      printf("a1: ");
      scanf("%f",&a1);
      printf("a2: ");
      scanf("%f",&a2);
      
	  printf("b1: ");
      scanf("%f",&b1);
      printf("b2: ");
      scanf("%f",&b2);
            
      printf("c1: ");
      scanf("%f",&c1);
      printf("c2: ");
      scanf("%f",&c2);
  
  printf("PHUONG TRINH DA NHAP LA:\n");
  printf("  %g.x  +  %g.y  =  %g \n ",a1,b1,c1);   
  printf(" %g.x  +  %g.y  =  %g \n ",a2,b2,c2);   
  printf("*******************************************\n");

  d=a1*b2-b1*a2;
  dx=c1*b2-b1*c2;
  dy=a1*c2-c1*a2;
  
  if(d==0)
  {
  
    if((a1/a2)==(b1/b2)&&(b1/b2)==(c1/c2)&&(c1/c2)==(a1/a2))
      printf("He phuong trinh co vo so nghiem\n");
    else
      printf("Phuong trinh vo nghiem\n");
}
  else
      printf("Phuong trinh co 1 cap nghiem duy nhat la:\n");
  printf("x:= %g\n",dx/d);
  printf("y:= %g\n",dy/d);
}
