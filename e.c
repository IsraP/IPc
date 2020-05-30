#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ano;
	int anoCometa;
	int i = 0;
	anoCometa = 3050;
	
	scanf("%i",&ano);

	while(ano!=0)
	{ 
		
		for (int cometas =14; cometas>0; cometas--)
		{ 
	
			while(anoCometa > ano)
			{	
	
		
			anoCometa = anoCometa-76;
			}
	printf("%i\n",anoCometa+76);
	scanf("%i",&ano);
	
	}
	
	}

}


