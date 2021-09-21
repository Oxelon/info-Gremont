#include <stdio.h>
#include <stdlib.h>

main()
{
	float a,b,c,d,e,f,g,h;

	 while (h=1)

	{
	printf("rentre votre âge ");
	scanf ("%f",&a);

	printf ("rentre 1 si vous etes un homme, 2 si vous etes une femme ");
	scanf ("%f",&b);

	printf ("nombre de fois où vous allez au cinema par mois ");
	scanf ("%f",&c);

	printf ("rentre 3 si vous preferais quick ou 4 si vous preferais mac donald ");
	scanf ("%f",&d);

	printf ("rentre le nombre de fois où vous allez au quick ou mac donald par mois ");
	scanf ("%f",&e);

	printf ("rentre 4 si vous pratiquez du sport si non rentre 5 ");
	scanf ("%f",&f);

	 if (f==4)
		 {

		printf ("si vous pratiquer le foot taper 6 si vous pratiquer le tennis taper 7 si vous partiquer le basket taper 8 si vous partiquer le judo taper 9 si vous partiquer la natation taper 10 si vous ne pratiquer aucun de c'est sport taper 11 ");
		scanf ("%f",&g);
		 }


		printf ("%f %f %f %f %f %f %f",a,b,c,d,e,f,g);


	 printf (" si vous souhaiter recomencer taper 1 ");
	 scanf ("%f",&h);




	 }


	getch();
}
