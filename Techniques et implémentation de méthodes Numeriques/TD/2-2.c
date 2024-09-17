#include <stdio.h>


int main(){

int i, S=0;
for (i=0; i<6; i++)
{
S+=i;
if (S>12) break;
}

printf("%d",i);
}
