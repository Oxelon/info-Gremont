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

int main(int argc, char** argv)
{

	char a = 65;
	char* car;
	int i;

	long longueur=0;
        char chaine1[100]={0};
        printf("entrez une chaine :\n");
        scanf("%s", chaine1);
        fflush(stdin);

	for(i=0;i< strlen(chaine1); i++)
	{
		if(chaine1[i] >= 'a' && chaine1[i] <= 'z')
		{
			chaine1[i] -= 'a' - 'A';
		}
	}

	printf("majuscule : %s\n", chaine1);


	for(i=0;i< strlen(chaine1); i++)
	{
		if(chaine1[i] >= 'A' && chaine1[i] <= 'Z')
		{
			chaine1[i] += 'a' - 'A';
		}
	}

	printf("minuscule : %s", chaine1);

	      getch();


	return 0;
}
