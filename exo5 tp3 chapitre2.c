#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{int a,b,n,k=0;
	char *p;
	p=malloc(100*sizeof(char));
	puts("entrer une phrase \a au maximum comport 100 carracters \a");
	gets(p);
	n=strlen(p);
	for(b=0;b<n;b++)
	{
		if(p[b]==' ')
		{
			for(a=b;a<n;a++)
			{
				p[a]=p[a+1];
			}
		}
	}
	printf("%s\n",p);
	getch();
	return 0;
}
