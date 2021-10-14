#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif



int main()
{

	     long longueur=0,i;
        char chaine1[100]={0},chaine2[100]={0};
        printf("entre une chaine :\n");
        scanf("%s",chaine1);
        longueur=strlen(chaine1);
		for(i=0;i<longueur;i++)
		{
			chaine2[i]=chaine1[longueur-i-1];
		}
		printf("\n%s\n" , chaine2);
	getche();
    return 0;
}
