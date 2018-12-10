#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	FILE *f,*g; // vytvorili sme fajl s premennou f
	
	f=fopen("sifrovane.txt","r"); // otvorime subor, a dame mu moznost ho citat
	g=fopen("desifrovane.txt","w"); // otvorime subor, a dame mu moznost ho citat
	
	char z;
	
	while((z=fgetc(f))!=EOF){ // text da do suboru
		if((z>='a'&& z<='z')|| (z>='A'&& z<='Z')){ // z malych ppismen na velke 
			z=z-3;
			if ((z<'a' && z>'Z') || z<'A')
				z=z+26;
		}else
		if(z>='0'&& z<='9'){ // cisla
			z=z+1;
			if (z>'9')
			z=z-10;
		
		}
	

		fputc(z,g);	 // zmeni ich
	
	}
	fclose(f);
	fclose(g);
}
