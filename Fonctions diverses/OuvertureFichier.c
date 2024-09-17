#include <stdio.h>

void main()


{
    float x,y;
    int i =0;

    filt*fchier=NULL;

    fichier = fopen("data.txt","r");

    if(fichier!=NULL)
    {
        while (fconf(fichier,"%f\t%f",&x,&y)!=EOF) // La fin du la condition signifie : Different de End Of File (EOF)
        {tabX[i]=x;tabY[i]=y;i++}


        fclose(fichier);
    }
}

/*

int getc(FILE *)
int putc(char, FILE *)

*/

