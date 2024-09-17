#include <stdio.h>
#include <math.h>

int main (){
    float a,b,c,x0,x1,x2,reel,img = 0.0;
    printf("input a, b, c :");
    scanf("%f %f %f",&a,&b,&c);
    float delta = pow(b,2) -4*a*c;


    if (delta > 0){
        x1 = (-b-sqrt(delta))/a ;
        x2 = (-b+sqrt(delta))/a ;
        printf("Le systeme admet deux solutions %f\n",x1,x2);}


    else if (delta == 0){x1 = -b/2*a;
        printf("Le systeme admet une solution reel %f",x1) ;}

    else

    {
        reel = -b/(2*a) ;
        img = sqrt(-delta) / (2*a);

        x1 = reel*(-img);
        x2 = reel*(+img);

    }

    printf("%f",delta);
}
