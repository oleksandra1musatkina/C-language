#include <stdio.h>
#include <ctype.h>


int main()
{
	int veza;
	int num;
	char pis;
	printf("Veza: ");
	scanf("%c%d", &pis, &num);	
	pis=toupper(pis);

	char newpis;
	int newnum;
		
	newpis=pis-1;
	newnum=num;
	
	while(newpis>='A'){
	
		printf("%c%d\n",newpis,newnum);
		newpis--;
	}
	
	newpis=pis+1;
	newnum=num;
	while( newpis<='H'){
		printf("%c%d\n", newpis,newnum);
		newpis++;		
	}
	
	newpis=pis;
	newnum=num-1;
	
	while(newnum>=1){
		printf("%c%d\n",newpis,newnum);
		newnum--;
	}
	
	newpis=pis;
	newnum=num+1;
	while( newnum<=8){
		printf("%c%d\n", newpis,newnum);
		newnum++;		
	}
	}
	
