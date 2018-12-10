#include <stdio.h>
#include <ctype.h>


int main()
{
	int strelec;
	int num;
	char pis;
	printf("Strelec: ");
	scanf("%c%d", &pis, &num);	
	pis=toupper(pis);

	char newpis;
	int newnum;
	for(newpis=pis-1, newnum=num+1; newpis>='A' && newnum<=8; newpis--, newnum++){
		
		printf("%c%d\n", newpis,newnum);
	}
	
	newpis=pis-1;
	newnum=num-1;
	
	while( newpis>='A'&& newnum>=1){
		printf("%c%d\n", newpis,newnum);
		newpis--;
		newnum--;	
	}
	
	newpis=pis+1;
	newnum=num+1;
	while(newpis<='H' && newnum<=8){
		printf("%c%d\n", newpis,newnum);
		newpis++;
		newnum++;
	}
	
	newpis=pis+1;
	newnum=num-1;
	while(newpis<='H' && newnum>=1){
		printf("%c%d\n", newpis,newnum);
		newpis++;
		newnum--;
	}
}
